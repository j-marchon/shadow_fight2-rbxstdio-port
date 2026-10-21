// IJCLCKIJJDH$$EGPGOOBHNIM @ RVA 0x353024C

void IJCLCKIJJDH__EGPGOOBHNIM(IJCLCKIJJDH_o *__this,int32_t HJDMBDBJEFL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *__this_00;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  int32_t local_2c;
  System_Collections_Generic_List_MFBFOBDKLBC__o *local_28;
  
  if ((DAT_04568a52 & 1) == 0) {
    FUN_01bab630(&BDMDJNOIBKC_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TryGetValue__
                );
    FUN_01bab630(&StringLiteral_11478);
    FUN_01bab630(&StringLiteral_8626);
    FUN_01bab630(&StringLiteral_22392);
    FUN_01bab630(&StringLiteral_22400);
    FUN_01bab630(&StringLiteral_11479);
                    /* try { // try from 036302c4 to 0373035f has its CatchHandler @ 036302c4
                       catch() { ... } // from try @ 036302c4 with catch @ 036302c4
                       catch() { ... } // from try @ 03630384 with catch @ 036302c4
                       catch() { ... } // from try @ 036303b8 with catch @ 036302c4
                       catch() { ... } // from try @ 036303e0 with catch @ 036302c4
                       catch() { ... } // from try @ 03630410 with catch @ 036302c4 */
    DAT_04568a52 = 1;
  }
  local_28 = (System_Collections_Generic_List_MFBFOBDKLBC__o *)0x0;
  pSVar3 = StringLiteral_11479;
  if ((__this->fields).IDNEINHPBHH == false) {
    __this_00 = (__this->fields).MFENGHDGHGI;
    if (__this_00 == (System_Collections_Generic_Dictionary_BDMDJNOIBKC__List_MFBFOBDKLBC___o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       HJDMBDBJEFL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<BDMDJNOIBKC,_List<MFBFOBDKLBC>>_TryGetValue__
                      );
    local_2c = HJDMBDBJEFL;
    if (bVar1) {
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(BDMDJNOIBKC_TypeInfo,&local_2c);
      pSVar3 = System_String__Format
                         (StringLiteral_22392,StringLiteral_11478,StringLiteral_8626,pIVar2,
                          (MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
                    /* try { // try from 03630360 to 03730367 has its CatchHandler @ 036303c4 */
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
      (__this->fields).IDNEINHPBHH = true;
      (__this->fields).PGGDMOEHIJI = 0;
                    /* try { // try from 03630378 to 03730383 has its CatchHandler @ 036303bc */
      IJCLCKIJJDH__HIDNIOLOJMJ(__this,local_28,method_00);
      return;
    }
                    /* try { // try from 03630384 to 037303b3 has its CatchHandler @ 036302c4 */
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(BDMDJNOIBKC_TypeInfo,&local_2c);
                    /* try { // try from 036303b4 to 037303b7 has its CatchHandler @ 036303c0 */
                    /* try { // try from 036303b8 to 037303db has its CatchHandler @ 036302c4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630378 with catch @ 036303bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036303b4 with catch @ 036303c0
                        */
    pSVar3 = System_String__Format
                       (StringLiteral_22400,StringLiteral_11478,StringLiteral_8626,pIVar2,
                        (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03630360 with catch @ 036303c4
                        */
  }
  KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 036303dc to 037303df has its CatchHandler @ 03630400 */
                    /* try { // try from 036303e0 to 03730407 has its CatchHandler @ 036302c4 */
  return;
}

