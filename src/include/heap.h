/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */
#ifndef _FR_HEAP_H
#define _FR_HEAP_H
/**
 * $Id$
 *
 * @file include/heap.h
 * @brief Structures and prototypes for binary heaps.
 *
 * @copyright 2007  Alan DeKok
 */
RCSIDH(heap_h, "$Id$")

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int (*fr_heap_cmp_t)(void const *, void const *);

typedef struct fr_heap_t fr_heap_t;
fr_heap_t *fr_heap_create(fr_heap_cmp_t cmp, ssize_t offset);

int fr_heap_insert(fr_heap_t *hp, void *data);
int fr_heap_extract(fr_heap_t *hp, void *data);
void *fr_heap_pop(fr_heap_t *hp) CC_HINT(nonnull);
void *fr_heap_peek(fr_heap_t *hp);
void *fr_heap_peek_tail(fr_heap_t *hp);
size_t fr_heap_num_elements(fr_heap_t *hp);

#ifdef __cplusplus
}
#endif
#endif /* _FR_HEAP_H*/
