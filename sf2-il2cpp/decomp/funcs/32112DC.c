// NGCBNMBJMOE$$NECCNHODCAE @ RVA 0x32112DC

UnityEngine_Sprite_o *
NGCBNMBJMOE__NECCNHODCAE
          (System_String_o *NPNDHEBBEAD,System_String_o *DMCFDIBHCPD,System_String_o *OEFBIMECEAM,
          bool LBKOHHHPNIP,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_Sprite_array *pUVar4;
  UnityEngine_Sprite_o *pUVar5;
  MethodInfo *method_00;
  UnityEngine_Object_o *__this;
  long lVar6;
  
  method_00 = (MethodInfo *)OEFBIMECEAM;
  if ((DAT_04566e8f & 1) == 0) {
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&StringLiteral_22364);
    DAT_04566e8f = 1;
  }
  bVar2 = System_String__IsNullOrEmpty(OEFBIMECEAM,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = System_String__Format
                       (StringLiteral_22364,(Il2CppObject *)NPNDHEBBEAD,(Il2CppObject *)OEFBIMECEAM,
                        (MethodInfo *)0x0);
                    /* try { // try from 03311360 to 03411403 has its CatchHandler @ 03311360
                       catch() { ... } // from try @ 03311360 with catch @ 03311360
                       catch() { ... } // from try @ 03311430 with catch @ 03311360
                       catch() { ... } // from try @ 0331145c with catch @ 03311360
                       catch() { ... } // from try @ 03311484 with catch @ 03311360
                       catch() { ... } // from try @ 033114c4 with catch @ 03311360 */
    method_00 = (MethodInfo *)OEFBIMECEAM;
    if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
      method_00 = (MethodInfo *)OEFBIMECEAM;
    }
    pUVar4 = NGCBNMBJMOE__MMHFNAEHAKC(pSVar3,LBKOHHHPNIP,method_00);
    if ((pUVar4 != (UnityEngine_Sprite_array *)0x0) &&
       (uVar1 = (uint)pUVar4->max_length, 0 < (int)uVar1)) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this = (UnityEngine_Object_o *)pUVar4->m_Items[lVar6];
        if (__this == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar3 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        bVar2 = System_String__op_Equality(pSVar3,DMCFDIBHCPD,(MethodInfo *)0x0);
        if (bVar2) {
                    /* try { // try from 03311404 to 0341140b has its CatchHandler @ 03311468 */
                    /* try { // try from 03311418 to 0341142f has its CatchHandler @ 03311464 */
          return (UnityEngine_Sprite_o *)__this;
        }
        uVar1 = (uint)pUVar4->max_length;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
  }
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar5 = NGCBNMBJMOE__CMMAOAPNOMN(NPNDHEBBEAD,DMCFDIBHCPD,method_00);
  return pUVar5;
}

