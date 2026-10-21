// FEPPOONJCGI$$LAENFPIHMDP @ RVA 0x30B2730

void FEPPOONJCGI__LAENFPIHMDP(FEPPOONJCGI_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Xml_XmlNode_o *pSVar1;
  ACHLOMELAJE_o *__this_00;
  System_Collections_Generic_List_KAJIALENBGD__o *pSVar2;
  
                    /* try { // try from 031b2730 to 032b2743 has its CatchHandler @ 031b2b64 */
                    /* try { // try from 031b2744 to 032b274b has its CatchHandler @ 031b2808 */
  if ((DAT_045661e9 & 1) == 0) {
                    /* try { // try from 031b274c to 032b274f has its CatchHandler @ 031b2800 */
                    /* try { // try from 031b2750 to 032b2757 has its CatchHandler @ 031b27fc */
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_Clear__);
                    /* try { // try from 031b2758 to 032b275b has its CatchHandler @ 031b280c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661e9 = 1;
  }
  pSVar1 = (__this->fields).EDIFMNKDBMF;
                    /* try { // try from 031b276c to 032b2783 has its CatchHandler @ 031b2b64 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    (*(pSVar1->klass->vtable)._49_RemoveAll.methodPtr)
              (pSVar1,(pSVar1->klass->vtable)._49_RemoveAll.method);
    pSVar2 = (__this->fields).GNGLHGOGCBO;
                    /* try { // try from 031b2784 to 032b278f has its CatchHandler @ 031b27f0 */
    if (pSVar2 != (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) {
      length = (pSVar2->fields)._size;
                    /* try { // try from 031b2790 to 032b2793 has its CatchHandler @ 031b280c */
                    /* try { // try from 031b2794 to 032b279f has its CatchHandler @ 031b27e4 */
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    /* try { // try from 031b27a0 to 032b27ab has its CatchHandler @ 031b27e0 */
      if (0 < length) {
                    /* try { // try from 031b27ac to 032b27b7 has its CatchHandler @ 031b27d0 */
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
                    /* catch() { ... } // from try @ 031b23cc with catch @ 031b27b8
                       try { // try from 031b27b8 to 032b290b has its CatchHandler @ 031b0e98 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 031b2400 with catch @ 031b27c4 */
      if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 031b27ac with catch @ 031b27d0 */
                    /* catch() { ... } // from try @ 031b1da0 with catch @ 031b27d4 */
                    /* catch() { ... } // from try @ 031b1d74 with catch @ 031b27d8 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 031b2124 with catch @ 031b27dc */
                    /* catch() { ... } // from try @ 031b27a0 with catch @ 031b27e0 */
        DAT_04565b7d = '\x01';
      }
                    /* catch() { ... } // from try @ 031b2794 with catch @ 031b27e4 */
                    /* catch() { ... } // from try @ 031b20e4 with catch @ 031b27e8 */
                    /* catch() { ... } // from try @ 031b1cf8 with catch @ 031b27ec */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031b2784 with catch @ 031b27f0 */
        thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 031b20c8 with catch @ 031b27f4 */
      }
                    /* catch() { ... } // from try @ 031b2104 with catch @ 031b27f8 */
                    /* catch() { ... } // from try @ 031b2750 with catch @ 031b27fc */
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 031b274c with catch @ 031b2800 */
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* catch() { ... } // from try @ 031b1cd4 with catch @ 031b2804 */
                    /* catch() { ... } // from try @ 031b2744 with catch @ 031b2808 */
                    /* catch() { ... } // from try @ 031b2758 with catch @ 031b280c
                       catch() { ... } // from try @ 031b2790 with catch @ 031b280c */
                    /* catch() { ... } // from try @ 031b1dec with catch @ 031b2810 */
                    /* catch() { ... } // from try @ 031b271c with catch @ 031b2814 */
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031b1c80 with catch @ 031b2818 */
  FUN_01bab8c8();
}

