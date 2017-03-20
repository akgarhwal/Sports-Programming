filetype on

filetype indent on

syntax enable

autocmd BufNewFile *.cpp :0r ~/.vim/cpp 

autocmd BufNewFile *.cpp :w!

map <F8> :!g++ -g  % && ./a.out <CR>

map <F12> :!gdb ./a.out <CR>

set number
highlight LineNr term=bold cterm=NONE ctermfg=DarkGrey ctermbg=NONE gui=NONE guifg=DarkGrey guibg=NONE

:inoremap <F5> <C-R>=strftime("%c")<CR>


