// HPEENDCCJND$$MBOAEJBLAPD @ RVA 0x31580B8

void HPEENDCCJND__MBOAEJBLAPD(HPEENDCCJND_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *newValue;
  int index;
  System_Collections_Generic_List_object__o *pSVar4;
  HPEENDCCJND_Fields *pHVar5;
  System_String_o *__this_00;
  int local_44;
  
                    /* try { // try from 032580c0 to 0335812f has its CatchHandler @ 03258144 */
  if ((DAT_04566850 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<object>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<object>_get_Item__);
    FUN_01bab630(&StringLiteral_21920);
    DAT_04566850 = 1;
  }
  local_44 = 0;
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._6_unknown.methodPtr)
                     (__this,(__this->klass->vtable)._6_unknown.method);
  pHVar5 = &__this->fields;
  pHVar5->NHGEHIFDNPB = pSVar2;
                    /* try { // try from 03258130 to 0335813b has its CatchHandler @ 03257784 */
  thunk_FUN_01c20e04(pHVar5,pSVar2);
                    /* try { // try from 0325813c to 03358143 has its CatchHandler @ 03258144 */
                    /* catch() { ... } // from try @ 032580c0 with catch @ 03258144
                       catch() { ... } // from try @ 0325813c with catch @ 03258144 */
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pHVar5->NHGEHIFDNPB,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).EIHCMKCJPJO,
                         Method_DJNBJHPDKDP_OBECCOPBADO<object>__), bVar1)) {
    return;
  }
  pSVar4 = (__this->fields).EIHCMKCJPJO;
  if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
    index = 0;
    do {
      if ((pSVar4->fields)._size <= index) {
        return;
      }
      __this_00 = (__this->fields).NHGEHIFDNPB;
      local_44 = index + 1;
      pSVar2 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_21920,pSVar2,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).EIHCMKCJPJO;
      if (((pSVar4 == (System_Collections_Generic_List_object__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              (pSVar4,index,
                               Method_System_Collections_Generic_List<object>_get_Item__),
          pIVar3 == (Il2CppObject *)0x0)) ||
         (newValue = (System_String_o *)
                     (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method),
         __this_00 == (System_String_o *)0x0)) break;
      pSVar2 = System_String__Replace(__this_00,pSVar2,newValue,(MethodInfo *)0x0);
      (__this->fields).NHGEHIFDNPB = pSVar2;
      thunk_FUN_01c20e04(pHVar5,pSVar2);
      pSVar4 = (__this->fields).EIHCMKCJPJO;
      index = index + 1;
    } while (pSVar4 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

