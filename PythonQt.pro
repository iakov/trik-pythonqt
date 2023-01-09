TEMPLATE = subdirs

CONFIG(generator) {
    SUBDIRS += generator
}

SUBDIRS += src extensions

extensions.depends += src

CONFIG(tests) {
    SUBDIRS += tests
    tests.depends += extensions
}
