" vimrc
" ============================================================
" Function for Commenting Lines in Vimrc:
" WRITE FUNCTION HERE
" ============================================================

" !! ==> I NEED TO CREATE A VIM-SCRIPT FUNCTION THAT FORMATS ALL COMMENT LINES INTO A READABLE FORMAT WHEN THE BUFFER RELOADS OR SOMETHING.
" Also, a MAPPING to CAPITALIZE a WORD.
" => Chapter 1: Getting Started --------------------------------------- {{{

" Basic Python-friendly Vim configuration. Colorscheme is changed from
" 'default' to make screenshots look better in print.

syntax on                  " Enable syntax highlighting.
filetype plugin indent on  " Enable file type based indentation.
set number
set expandtab              " Expand tabs to spaces. Essential in Python.
set tabstop=4              " Number of spaces tab is counted for.
set shiftwidth=4           " Number of spaces to use for autoindent.
set softtabstop=4

"set backspace=2            " Fix backspace behavior on most terminals.
set autoindent             " Respect indentation when starting a new line.
set backspace=indent,eol,start

let g:film_noir_color = 'green'
" Mastering Vim
set wildmenu " Enable enhanced tab autocomplete
set wildmode=list:longest,full " Complete till longest string, then open wildmenu.a

" /\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\/
" Vim-script function to comment out lines in vimrc:
"vnoremap <silent> ;/ :call ToggleComment()<cr>
"
"function! ToggleComment()
"        if matchstr(getline(line(".")),'^\s*\/\/.*$') == ''
"                :execute "s:^://:"
"        else
"                :execute "s:^\s*//::"
"        endif
"endfunction
" /\/\/\/\/\/\//\/\/\/\/\/\//\/\/\/\/\/\//\/\/\/\/\/\//\/\/\/\/\/\/

" Learning Vim the hard way.
"set grepprg=/usr/bin/grep
let mapleader=","
let maplocalleader="\\"
echom " "|
echom " "|
echom "Don’t believe anything unless you have thought it through for yourself. — Anna Pell Wheeler"
"echom "'A thinker sees his own actions as experiments and questions as attempts to find out something." |
"echom " Success and failure are for him answers above all.'" |
"echom "------------------------------------------------------" |
"echom “'I must not fear. Fear is the mind-killer. Fear is the little-death that brings total obliteration. I will face my fear. I will permit it to pass over me and through me. And when it has gone past I will turn the inner eye to see its path. Where the fear has gone there will be nothing. Only I will remain.”' 
"noremap <leader> - ddp
"noremap <leader> _ ddP
"inoremap <leader> <c-u> <esc>viwU
"nnoremap <leader> <c-u> viwU
vnoremap <leader>" <esc>`>a"<esc>`<i"<esc>lv`><esc>
vnoremap <leader>' <esc>`>a'<esc>`<i'<esc>lv`><esc>
" Edit vimrc file
nnoremap <leader>ev :vsplit $MYVIMRC<CR>
nnoremap <leader>sv :source $MYVIMRC<CR>
nnoremap <leader>" viw<esc>a"<esc>bi"<esc>lel
nnoremap <leader>' viw<esc>a'<esc>bi'<esc>lel
iabbrev @1 parkercorya@yahoo.com
iabbrev @@ parkercorya@gmail.com
iabbrev @2 parkdaddy34@gmail.com
nnoremap L $
nnoremap H 0
inoremap jk <esc>l
inoremap JK <esc>l
"inoremap <esc> <nop> " What the hell is going on here?!
noremap <Left> <nop>
noremap <Right> <nop>
noremap <Up> <nop>
noremap <Down> <nop>

"split navigations
nnoremap <C-J> <C-W><C-J>
nnoremap <C-K> <C-W><C-K>
nnoremap <C-L> <C-W><C-L>
nnoremap <C-H> <C-W><C-H>

" Wrap word in curly braces or parentheses: (from the front of word)
nnoremap <leader>{{ cw{}<esc>P
nnoremap <leader>(( cw()<esc>P
vnoremap <leader>(( c()<esc>P
vnoremap <leader>{{ c{}<esc>P
vnoremap <leader>[[ c[]<esc>P

" MARKDOWN Files =======================================================
augroup obsidian
    autocmd!
    autocmd BufNewFile,BufRead *.md,*.markdown,*.mdwn,*.mkd,*.txt setlocal wrap
    " ITALICS
    autocmd FileType markdown vnoremap <buffer> <localleader>* c**<esc>P
    " BOLD
    autocmd FileType markdown vnoremap <buffer> <localleader>8 c****<esc>P

augroup END

" =====================================================================

" Wrap word in single quotes:
noremap <leader>'p cw''<esc>P

" Replaces all occurences of a certain character:
" :%s/foo/bar/g
"    Find each occurrence of 'foo' (in all lines), and replace it with 'bar'.



" https://vim.fandom.com/wiki/Comment_%26_Uncomment_multiple_lines_in_Vim
source ~/.vim/vcomment.vim
map<C-a> :call Comment()<CR>
map<C-b> :call Uncomment()<CR>


" ====================================
" Python 
" ------
nnoremap <leader>bp ibreakpoint()<esc>b:w

augroup Shebang
    autocmd BufNewFile *.py 0put =\"#!/usr/bin/env python\"
augroup END

au BufNewFile,BufRead *.py
    \ set tabstop=4 |
    \ set softtabstop=4 |
    \ set shiftwidth=4 |
    \ set textwidth=79 |
    \ set expandtab |
    \ set autoindent |
    \ set fileformat=unix |
    \ set fileencoding=utf-8

"autocmd FileType python :iabbrev <buffer> iff if:<left>
"====================================
"
"===================================
"HTML
"----
autocmd BufNewFile, BufRead *.html setlocal nowrap
"===================================s
"JavaScript
"----------
" Emmet-vim::
let g:user_emmet_leader_key=','
let g:user_emmet_settings = {
  \  'javascript.jsx' : {
    \      'extends' : 'jsx',
    \  },
    \}

" Javscript
set smarttab
set cindent

au BufNewFile,BufRead *.js,*.html,*.css,*.tex
    \ setlocal tabstop=4 |
    \ setlocal softtabstop=2 |
    \ setlocal shiftwidth=4 |

" Comment out a line:
autocmd FileType javascript nnoremap <buffer> <localleader>c I//<esc>
"===================================

set directory=$HOME/.vim/swap//


""nnoremap <leader>g :silent execute "grep! -R " . shellescape(expand("<cWORD>")) . " ."<cr>:copen<cr>
augroup curse
    autocmd!
    autocmd BufNewFile,BufRead *.html setlocal nowrap
    autocmd FileType python :iabbrev <buffer> fuck ( ͡° ͜ʖ ͡° )
    autocmd FileType python :iabbrev <buffer> fucker ( ͡° ͜ʖ ͡° )
    autocmd FileType python :iabbrev <buffer> fucking ( ͡° ͜ʖ ͡° )
    autocmd FileType python :iabbrev <buffer> fucks ( ͡° ͜ʖ ͡° )
    autocmd FileType python :iabbrev <buffer> fuckers ( ͡° ͜ʖ ͡° )
augroup END

" Download and install vim-plug (cross platform).
if empty(glob(
    \ '$HOME/' . (has('win32') ? 'vimfiles' : '.vim') . '/autoload/plug.vim'))
  execute '!curl -fLo ' .
    \ (has('win32') ? '\%USERPROFILE\%/vimfiles' : '$HOME/.vim') .
    \ '/autoload/plug.vim --create-dirs ' .
    \ 'https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim'
  autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
endif

autocmd BufEnter *.{js,jsx,ts,tsx} :syntax sync fromstart
autocmd BufLeave *.{js,jsx,ts,tsx} :syntax sync clear

"if isdirectory('./node_modules') && isdirectory('./node_modules/prettier')
"  let g:coc_global_extensions += ['coc-prettier']
"endif
"
"if isdirectory('./node_modules') && isdirectory('./node_modules/eslint')
"  let g:coc_global_extensions += ['coc-eslint']
"endif

" YOU COMPLETE ME SHIT /\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\/
" Mapping to close the completion menu (default <C-y>)
let g:ycm_key_list_stop_completion = ['<C-x>']
" Set filetypes where YCM will be turned on
let g:ycm_filetype_whitelist = { 'cpp':1, 'h':2, 'hpp':3, 'c':4, 'cxx':5 }
" Close preview window after completing the insertion
let g:ycm_autoclose_preview_window_after_insertion = 1
let g:ycm_autoclose_preview_window_after_completion = 1
let g:ycm_confirm_extra_conf = 0                 " Don't confirm python conf
let g:ycm_always_populate_location_list = 1      " Always populae diagnostics list
let g:ycm_enable_diagnostic_signs = 1            " Enable line highligting diagnostics
let g:ycm_open_loclist_on_ycm_diags = 1          " Open location list to view diagnostics
let g:ycm_max_num_candidates = 20                " Max number of completion suggestions
let g:ycm_max_num_identifier_candidates = 10     " Max number of identifier-based suggestions
let g:ycm_auto_trigger = 1                       " Enable completion menu
let g:ycm_show_diagnostic_ui = 1                 " Show diagnostic display features
let g:ycm_error_symbol = '>>'                    " The error symbol in Vim gutter
let g:ycm_enable_diagnostic_signs = 1            " Display icons in Vim's gutter, error, warnings
let g:ycm_enable_diagnostic_highlighting = 1     " Highlight regions of diagnostic text
let g:ycm_echo_current_diagnostic = 1            " Echo line's diagnostic that cursor is on
"/\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\//\/\/\/\/\/\/\/

" Manage plugins with vim-plug
call plug#begin()

Plug 'mattn/emmet-vim'
Plug 'https://github.com/pangloss/vim-javascript.git'
Plug 'vim-scripts/indentpython.vim'
Plug 'junegunn/vim-plug'
Plug 'maxmellon/vim-jsx-pretty'
Plug 'judah-caruso/film-noir'
Plug 'https://github.com/peitalin/vim-jsx-typescript.git'
Plug 'https://github.com/styled-components/vim-styled-components.git'
"Plug 'https://github.com/sheerun/vim-polyglot.git'
Plug 'https://github.com/jparise/vim-graphql.git'
Plug 'https://github.com/jiangmiao/auto-pairs.git'
Plug 'https://github.com/vim-syntastic/syntastic.git'
Plug 'https://github.com/inside/vim-search-pulse.git'
Plug 'lervag/vimtex'    " For writing notes in LaTex
Plug 'sirver/ultisnips'
Plug 'honza/vim-snippets'
Plug 'https://github.com/farfanoide/vim-kivy.git'
Plug 'https://github.com/whonore/Coqtail.git'
Plug 'neoclide/coc-tsserver', {'do': 'yarn install --frozen-lockfile'}
Plug 'https://github.com/neoclide/coc-java.git'

let g:plug_timeout = 300 " Increase vim-plug timeout for YouCompleteME.
Plug 'ycm-core/YouCompleteMe', {'do': './install.py'}

call plug#end()

" MARKDOWN FILES ====================================
" Viewer options: One may configure the viewer either by specifying a built-in
" viewer method:
let g:vimtex_view_method = 'zathura'

" VimTeX uses latexmk as the default compiler backend. If you use it, which is
" strongly recommended, you probably don't need to configure anything. If you
" want another compiler backend, you can change it as follows. The list of
" supported backends and further explanation is provided in the documentation,
" see ":help vimtex-compiler".
let g:vimtex_compiler_method = 'latexrun'
" Most VimTeX mappings rely on localleader and this can be changed with the
" following line. The default is usually fine and is the symbol "\".
let g:tex_flavor='latex'
let g:vimtex_view_method='zathura'
let g:vimtex_quickfix_mode=0
set conceallevel=1
let g:tex_conceal='abdmg'"
" ultisnips====================================
let g:UltiSnipsExpandTrigger = '<tab>'
let g:UltiSnipsJumpForwardTrigger = '<tab>'
let g:UltiSnipsJumpBackwardTrigger = '<s-tab>'"
" ====================================
colorscheme film_noir         " Change a colorscheme.

" ===================================================
"My first Vimscript function:
function! FirstFunction()
    echom "My First Fucking VimScript function!"
endfunction
" ===================================================
" Just added this! 
let g:isRecording = get(g:, 'isRecording', 0)
nnoremap q :let g:isRecording = !g:isRecording<CR>q






