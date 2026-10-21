// LFBHPHJFCPO$$OMNMBCCGNBN @ RVA 0x304D644

PCNNBADGEGD_o *
LFBHPHJFCPO__OMNMBCCGNBN(LFBHPHJFCPO_o *__this,System_String_o *GJCPJIFKLAI,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Object_array *args;
  undefined8 uVar3;
  PCNNBADGEGD_array *pPVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_04565e1e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0314d674 to 0324d6d7 has its CatchHandler @ 0314d674
                       catch() { ... } // from try @ 0314d674 with catch @ 0314d674
                       catch() { ... } // from try @ 0314d788 with catch @ 0314d674
                       catch() { ... } // from try @ 0314d7d8 with catch @ 0314d674
                       catch() { ... } // from try @ 0314d814 with catch @ 0314d674
                       catch() { ... } // from try @ 0314d854 with catch @ 0314d674 */
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_21399);
    DAT_04565e1e = 1;
  }
  pPVar4 = (__this->fields).FHIEDGKJGLJ;
  if (pPVar4 != (PCNNBADGEGD_array *)0x0) {
    lVar5 = 4;
    do {
      uVar1 = (uint)pPVar4->max_length;
      uVar6 = (int)lVar5 - 4;
      if ((int)uVar1 <= (int)uVar6) {
                    /* try { // try from 0314d6fc to 0324d6ff has its CatchHandler @ 0314d7e0 */
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args != (System_Object_array *)0x0) {
                    /* try { // try from 0314d70c to 0324d72b has its CatchHandler @ 0314d7ec */
          if ((GJCPJIFKLAI != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(GJCPJIFKLAI,(((args->obj).klass)->_1).element_class),
             lVar5 == 0)) {
            uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar3,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = (Il2CppObject *)GJCPJIFKLAI;
                    /* try { // try from 0314d738 to 0324d747 has its CatchHandler @ 0314d7e8 */
            thunk_FUN_01c20e04(args->m_Items,GJCPJIFKLAI);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_21399,args,(MethodInfo *)0x0);
                    /* try { // try from 0314d788 to 0324d7bb has its CatchHandler @ 0314d674 */
            return (PCNNBADGEGD_o *)0x0;
                    /* try { // try from 0314d760 to 0324d787 has its CatchHandler @ 0314d7e4 */
          }
LAB_0314d794:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        break;
      }
      if (uVar1 <= uVar6) goto LAB_0314d794;
      if (pPVar4->m_Items[lVar5 + -4] == (PCNNBADGEGD_o *)0x0) break;
                    /* try { // try from 0314d6d8 to 0324d6db has its CatchHandler @ 0314d7f8 */
                    /* try { // try from 0314d6e4 to 0324d6e7 has its CatchHandler @ 0314d7f4 */
      bVar2 = System_String__op_Equality
                        ((pPVar4->m_Items[lVar5 + -4]->fields).AMGLPLAOCPD,GJCPJIFKLAI,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pPVar4 = (__this->fields).FHIEDGKJGLJ;
        if (pPVar4 != (PCNNBADGEGD_array *)0x0) {
          if (uVar6 < (uint)pPVar4->max_length) {
            return pPVar4->m_Items[lVar5 + -4];
          }
          goto LAB_0314d794;
        }
        break;
      }
                    /* try { // try from 0314d6ec to 0324d6f3 has its CatchHandler @ 0314d7f0 */
      pPVar4 = (__this->fields).FHIEDGKJGLJ;
      lVar5 = lVar5 + 1;
    } while (pPVar4 != (PCNNBADGEGD_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

