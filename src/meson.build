gnome_finance_sources = [
  'main.cpp',
  'application.cpp',
  'main-window.cpp',
]

gnome_finance_deps = [
  dependency('gtkmm-3.0', version: '>= 3.18'),
]

gnome = import('gnome')

gnome_finance_sources += gnome.compile_resources('gnome-finance-resources',
  'gnome-finance.gresource.xml',
  c_name: 'gnome_finance'
)

executable('gnome-finance', gnome_finance_sources,
  dependencies: gnome_finance_deps,
  install: true,
)
