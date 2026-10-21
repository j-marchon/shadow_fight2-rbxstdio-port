// JHHFDBLANPH.MNHKJDJJINH$$IDJNOIMDGKJ @ RVA 0x316ED94

void JHHFDBLANPH_MNHKJDJJINH__IDJNOIMDGKJ
               (JHHFDBLANPH_MNHKJDJJINH_o *__this,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_String_array *pSVar4;
  JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *pJVar5;
  JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o **ppJVar6;
  
  if ((DAT_0456690d & 1) == 0) {
    FUN_01bab630(&JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_TypeInfo);
    DAT_0456690d = 1;
  }
  if (OOGPLJBADCD != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(OOGPLJBADCD,0x7d,(MethodInfo *)0x0);
    pSVar2 = System_String__Substring(OOGPLJBADCD,2,iVar1 + -2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar3 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
      pSVar2 = System_String__Substring
                         (OOGPLJBADCD,iVar1 + 3,((OOGPLJBADCD->fields)._stringLength - iVar1) + -5,
                          (MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar4 = System_String__Split(pSVar2,0x2c,0,(MethodInfo *)0x0);
        pJVar5 = (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)
                 thunk_FUN_01bda818(JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_TypeInfo);
        System_Object___ctor((Il2CppObject *)pJVar5,(MethodInfo *)0x0);
        ppJVar6 = &(__this->fields).EMPEBPJNGKP;
        *ppJVar6 = pJVar5;
        thunk_FUN_01c20e04(ppJVar6,pJVar5);
        if (pSVar3 != (System_String_array *)0x0) {
          if ((int)pSVar3->max_length == 0) {
LAB_0326ef14:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pJVar5 = *ppJVar6;
          iVar1 = System_Int32__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
          if (pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
            (pJVar5->fields).INIFNCOHJBN = iVar1;
            if ((uint)pSVar3->max_length < 2) goto LAB_0326ef14;
            pJVar5 = *ppJVar6;
            iVar1 = System_Int32__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
            if ((pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) &&
               ((pJVar5->fields).IACLMNCJFAO = iVar1, pSVar4 != (System_String_array *)0x0)) {
              if ((int)pSVar4->max_length == 0) goto LAB_0326ef14;
              pJVar5 = *ppJVar6;
              iVar1 = System_Int32__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0);
              if (pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
                (pJVar5->fields).BDAIJCAAMKC = iVar1;
                if ((uint)pSVar4->max_length < 2) goto LAB_0326ef14;
                pJVar5 = *ppJVar6;
                iVar1 = System_Int32__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0);
                if (pJVar5 != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
                  (pJVar5->fields).POFBPABAAJH = iVar1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

