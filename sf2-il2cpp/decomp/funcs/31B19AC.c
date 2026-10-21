// Nekki.SF2.GUI.Profile.TrickContent$$CDOMELDIPFI @ RVA 0x31B19AC

System_String_o *
Nekki_SF2_GUI_Profile_TrickContent__CDOMELDIPFI
          (Nekki_SF2_GUI_Profile_TrickContent_o *__this,MethodInfo *method)

{
  int index;
  int32_t value;
  int iVar1;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_float__o *pSVar3;
  int index_00;
  float fVar4;
  float fVar5;
  int local_64;
  
  if ((DAT_04566b80 & 1) == 0) {
                    /* try { // try from 032b19e0 to 033b1a73 has its CatchHandler @ 032b122c */
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Item__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_571);
    FUN_01bab630(&StringLiteral_2423);
    DAT_04566b80 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  local_64 = 1;
  pSVar3 = (__this->fields).LHBGKMGNOEP;
  if (pSVar3 != (System_Collections_Generic_List_float__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
                    /* try { // try from 032b1a74 to 033b1a7b has its CatchHandler @ 032b1ae4 */
                    /* try { // try from 032b1a7c to 033b1a83 has its CatchHandler @ 032b1b90 */
      index_00 = 0;
      do {
                    /* try { // try from 032b1a84 to 033b1a8b has its CatchHandler @ 032b1ad4 */
        index = index_00 + 1;
                    /* try { // try from 032b1a8c to 033b1a93 has its CatchHandler @ 032b1ac8 */
        if (index < iVar1) {
          pSVar3 = (__this->fields).LHBGKMGNOEP;
                    /* try { // try from 032b1a94 to 033b1a9b has its CatchHandler @ 032b1ad8 */
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
                    /* try { // try from 032b1a9c to 033b1aa7 has its CatchHandler @ 032b122c */
          fVar4 = System_Collections_Generic_List<float>__get_Item
                            (pSVar3,index_00,
                             Method_System_Collections_Generic_List<float>_get_Item__);
          pSVar3 = (__this->fields).LHBGKMGNOEP;
                    /* try { // try from 032b1aa8 to 033b1aab has its CatchHandler @ 032b1ac4 */
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
                    /* try { // try from 032b1aac to 033b1aaf has its CatchHandler @ 032b1ac0 */
                    /* try { // try from 032b1ab0 to 033b1ab3 has its CatchHandler @ 032b1abc */
                    /* try { // try from 032b1ab4 to 033b1af7 has its CatchHandler @ 032b122c */
          fVar5 = System_Collections_Generic_List<float>__get_Item
                            (pSVar3,index,Method_System_Collections_Generic_List<float>_get_Item__);
                    /* catch() { ... } // from try @ 032b1ab0 with catch @ 032b1abc */
                    /* catch() { ... } // from try @ 032b1aac with catch @ 032b1ac0 */
          if (fVar4 != fVar5) goto LAB_032b1ad4;
                    /* catch() { ... } // from try @ 032b1aa8 with catch @ 032b1ac4 */
                    /* catch() { ... } // from try @ 032b1a8c with catch @ 032b1ac8 */
          local_64 = local_64 + 1;
                    /* catch() { ... } // from try @ 032b1904 with catch @ 032b1acc */
                    /* catch() { ... } // from try @ 032b18a8 with catch @ 032b1ad0 */
        }
        else {
LAB_032b1ad4:
                    /* catch() { ... } // from try @ 032b1a84 with catch @ 032b1ad4 */
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_032b1bd8;
                    /* catch() { ... } // from try @ 032b1a94 with catch @ 032b1ad8 */
                    /* catch() { ... } // from try @ 032b16bc with catch @ 032b1adc */
                    /* catch() { ... } // from try @ 032b1660 with catch @ 032b1ae0 */
                    /* catch() { ... } // from try @ 032b1a74 with catch @ 032b1ae4 */
          System_Text_StringBuilder__Append(__this_00,StringLiteral_2423,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b196c with catch @ 032b1ae8 */
          pSVar3 = (__this->fields).LHBGKMGNOEP;
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
                    /* try { // try from 032b1af8 to 033b1afb has its CatchHandler @ 032b1b0c */
          fVar4 = System_Collections_Generic_List<float>__get_Item
                            (pSVar3,index_00,
                             Method_System_Collections_Generic_List<float>_get_Item__);
                    /* catch() { ... } // from try @ 032b1af8 with catch @ 032b1b0c */
          value = -0x80000000;
          if (fVar4 * 100.0 != INFINITY) {
            value = (int)(fVar4 * 100.0);
          }
                    /* try { // try from 032b1b14 to 033b1b87 has its CatchHandler @ 032b1ce4 */
          System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
          if (1 < local_64) {
            pSVar2 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
            pSVar2 = System_String__Concat(StringLiteral_571,pSVar2,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(__this_00,pSVar2,(MethodInfo *)0x0);
            local_64 = 1;
          }
          pSVar3 = (__this->fields).LHBGKMGNOEP;
          if (pSVar3 == (System_Collections_Generic_List_float__o *)0x0) goto LAB_032b1bd8;
          if (index_00 < (pSVar3->fields)._size + -1) {
                    /* catch() { ... } // from try @ 032b1428 with catch @ 032b1b88
                       try { // try from 032b1b88 to 033b1ba3 has its CatchHandler @ 032b122c */
                    /* catch() { ... } // from try @ 032b13cc with catch @ 032b1b8c */
                    /* catch() { ... } // from try @ 032b1a7c with catch @ 032b1b90 */
                    /* catch() { ... } // from try @ 032b1720 with catch @ 032b1b94 */
            System_Text_StringBuilder__Append(__this_00,StringLiteral_47,(MethodInfo *)0x0);
          }
        }
        index_00 = index;
      } while (iVar1 != index);
    }
                    /* try { // try from 032b1ba4 to 033b1ba7 has its CatchHandler @ 032b1bbc */
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar2 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                    /* catch() { ... } // from try @ 032b1ba4 with catch @ 032b1bbc */
                    /* try { // try from 032b1bc4 to 033b1c37 has its CatchHandler @ 032b1ce4 */
      return pSVar2;
    }
  }
LAB_032b1bd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

