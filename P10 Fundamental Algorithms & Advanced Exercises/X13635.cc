#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

bool comp(const Track &a, const Track &b) {
	if(a.artist == b.artist){
		if(a.year == b.year) return a.title < b.title;
		return a.year < b.year;
	}
	return a.artist < b.artist;
}

vector<Track> read_tracks(int n) {
	vector<Track> llista(n);
  	for(int i = 0; i < n; ++i){
  		cin >> llista[i].artist >> llista[i].title >> llista[i].genre >> llista[i].year;
	}
	return llista;
}

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
	int n;
	cin >> n;
	vector<Track> playlist = read_tracks(n);
	sort(playlist.begin(), playlist.end(), comp);
	string genre;
	while(cin >> genre){
		for(int i = 0; i < n; ++i){
			if(playlist[i].genre == genre) print_track(playlist[i]);
		}
	}
}
