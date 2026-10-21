// Nekki.SF2.GUI.Map.ContentToggle$$.ctor @ RVA 0x33B2614

void Nekki_SF2_GUI_Map_ContentToggle___ctor
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_KCEKMOECEJK__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034b2618 to 035b261b has its CatchHandler @ 034b2644 */
                    /* try { // try from 034b261c to 035b261f has its CatchHandler @ 034b2640 */
                    /* try { // try from 034b2620 to 035b2623 has its CatchHandler @ 034b263c */
                    /* try { // try from 034b2624 to 035b2627 has its CatchHandler @ 034b2184 */
                    /* try { // try from 034b2628 to 035b262b has its CatchHandler @ 034b2638 */
                    /* try { // try from 034b262c to 035b262f has its CatchHandler @ 034b2634 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b25d8 with catch @ 034b2630
                       try { // try from 034b2630 to 035b2663 has its CatchHandler @ 034b2184 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b262c with catch @ 034b2634
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b2628 with catch @ 034b2638
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b2620 with catch @ 034b263c
                        */
  if ((DAT_04567d53 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b261c with catch @ 034b2640
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b2618 with catch @ 034b2644
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b25a8 with catch @ 034b2648
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034b257c with catch @ 034b264c
                        */
    FUN_01bab630(&System_Collections_Generic_List<KCEKMOECEJK>_TypeInfo);
    DAT_04567d53 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034b2664 to 035b2667 has its CatchHandler @ 034b2688 */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KCEKMOECEJK>_TypeInfo,method);
                    /* try { // try from 034b2668 to 035b268f has its CatchHandler @ 034b2184 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<KCEKMOECEJK>__ctor__);
  ppSVar1 = &(__this->fields).MAPPKOGKCBA;
  *ppSVar1 = (System_Collections_Generic_List_KCEKMOECEJK__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* catch() { ... } // from try @ 034b2664 with catch @ 034b2688 */
                    /* try { // try from 034b2690 to 035b2697 has its CatchHandler @ 034b26ac */
                    /* try { // try from 034b2698 to 035b26a3 has its CatchHandler @ 034b2184 */
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}

