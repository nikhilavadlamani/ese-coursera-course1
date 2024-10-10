/******************************************************************************
 * Copyright (C) 2024 by Nikhila Vadlamani
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain the copyright found in 
 * the LICENSE file.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE
 *
 *****************************************************************************/

/**
 * @file main.c 
 * @brief This file is the main file for the final assessment of course1.
 *
 * @author Nikhila Vadlamani 
 * @date 2024-09-10
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.
#include "memory.h"
#include "stats.h"
#include "data.h"


int main(){
    #ifdef COURSE1
        printf("calling course1()\n");
        course1();  
        return 0;
    #endif

    return 0;
}
