// NCNJEIBHGBH$$LLNADPGEEEJ @ RVA 0x32F2A24

System_Collections_Generic_List_MapButton__o *
NCNJEIBHGBH__LLNADPGEEEJ
          (NCNJEIBHGBH_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,bool MADBADMMABJ,
          MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA;
  LIDDCJFOOOI_o *pLVar1;
  MethodInfo *in_x4;
  MethodInfo *in_x6;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if ((DAT_04567677 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    DAT_04567677 = 1;
  }
  pSVar2 = (__this->fields).PAFEHLCLKEC;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
                    /* try { // try from 033f2a9c to 034f2aa3 has its CatchHandler @ 033f3108 */
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).CJKAPEOHOLL
    ;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* try { // try from 033f2abc to 034f2ac3 has its CatchHandler @ 033f3104 */
      System_Collections_Generic_Dictionary<object,_int>__Clear
                (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
                    /* try { // try from 033f2ad8 to 034f2adf has its CatchHandler @ 033f2b58 */
      GMFEBFOGDAA = (System_Collections_Generic_List_MapButton__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,
                 Method_System_Collections_Generic_List<MapButton>__ctor__);
      pLVar1 = (__this->fields).GNMGOPAABKE;
                    /* try { // try from 033f2aec to 034f2af7 has its CatchHandler @ 033f2b50 */
      if (pLVar1 != (LIDDCJFOOOI_o *)0x0) {
        LIDDCJFOOOI__DGLJCGNHLIG(pLVar1,0.0,60.0,(MethodInfo *)0x0);
                    /* try { // try from 033f2b04 to 034f2b0b has its CatchHandler @ 033f2b54 */
        pLVar1 = (__this->fields).PFBKEFOBEDB;
        if (pLVar1 != (LIDDCJFOOOI_o *)0x0) {
                    /* try { // try from 033f2b1c to 034f2b23 has its CatchHandler @ 033f30f4 */
          LIDDCJFOOOI__DGLJCGNHLIG(pLVar1,0.0,60.0,(MethodInfo *)0x0);
          NCNJEIBHGBH__BIMEOHNANKC(__this,KCAHJMFOIAG,GMFEBFOGDAA,MADBADMMABJ,in_x4);
                    /* try { // try from 033f2b38 to 034f2b3b has its CatchHandler @ 033f2b4c */
                    /* try { // try from 033f2b40 to 034f2b43 has its CatchHandler @ 033f2b48 */
                    /* try { // try from 033f2b44 to 034f2b6f has its CatchHandler @ 033f26fc */
                    /* catch() { ... } // from try @ 033f2b40 with catch @ 033f2b48 */
          NCNJEIBHGBH__HGLLNAOGFEN(__this,KCAHJMFOIAG,GMFEBFOGDAA,MADBADMMABJ,in_x4);
                    /* catch() { ... } // from try @ 033f2b38 with catch @ 033f2b4c */
                    /* catch() { ... } // from try @ 033f2aec with catch @ 033f2b50 */
                    /* catch() { ... } // from try @ 033f2b04 with catch @ 033f2b54 */
                    /* catch() { ... } // from try @ 033f2ad8 with catch @ 033f2b58 */
          NCNJEIBHGBH__NJMNFMIBOPJ(__this,KCAHJMFOIAG,GMFEBFOGDAA,true,false,MADBADMMABJ,in_x6);
                    /* try { // try from 033f2b70 to 034f2b73 has its CatchHandler @ 033f30d8 */
                    /* try { // try from 033f2b74 to 034f2e27 has its CatchHandler @ 033f26fc */
          return GMFEBFOGDAA;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

