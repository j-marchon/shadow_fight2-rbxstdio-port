// JJPNLEPEAFM$$BAPFMKGFGHG @ RVA 0x3532368

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__BAPFMKGFGHG(ADDCOJMHMHE_o *BHHMMBFKGGN,int32_t CMPFDDMPDGN,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_NBLEEDEAPHB__o *pSVar3;
  NBLEEDEAPHB_o *__this;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  undefined8 uVar6;
  System_Action_object__o *pSVar7;
  int index;
  byte bVar8;
  undefined4 local_c0 [36];
  
  if ((DAT_04568a87 & 1) == 0) {
    FUN_01bab630(&ADDCOJMHMHE_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
    DAT_04568a87 = 1;
  }
  pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
  if (pSVar3 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
    index = 0;
    bVar8 = 1;
    do {
      iVar1 = (pSVar3->fields)._size;
      if (iVar1 <= index) {
        if (iVar1 < 1) {
LAB_0363245c:
          if (bVar8 != 0 || ((BHHMMBFKGGN->fields).EFMOMJEJENC & 1U) == 0) {
            memcpy(local_c0,BHHMMBFKGGN,0x90);
            pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(ADDCOJMHMHE_TypeInfo,local_c0);
            pNVar5 = GCIFMNHADDF__ACDDKABEBAP(CMPFDDMPDGN,pIVar4,(MethodInfo *)0x0);
            return pNVar5;
          }
        }
        else {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,0,
                              Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) break;
          if (*(char *)&pIVar4[6].klass == '\0') goto LAB_0363245c;
          pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
          if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                  Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
             pIVar4 == (Il2CppObject *)0x0)) break;
          if (0 < (long)pIVar4[5].monitor) goto LAB_0363245c;
        }
        if ((BHHMMBFKGGN->fields).LAALDDOEANK != (System_Action_object__o *)0x0) {
          pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
          if ((pSVar3 == (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) ||
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,0,
                                  Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__),
             pIVar4 == (Il2CppObject *)0x0)) break;
          local_c0[0] = *(undefined4 *)&pIVar4[5].klass;
          pSVar7 = (BHHMMBFKGGN->fields).LAALDDOEANK;
          uVar6 = thunk_FUN_01bda448(int_TypeInfo,local_c0);
          if (pSVar7 == (System_Action_object__o *)0x0) break;
          (*(code *)(pSVar7->fields).super.super.invoke_impl)
                    ((pSVar7->fields).super.super.method_code,uVar6,
                     (pSVar7->fields).super.super.method);
        }
        return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
      __this = (NBLEEDEAPHB_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          Method_System_Collections_Generic_List<NBLEEDEAPHB>_get_Item__);
      if (__this == (NBLEEDEAPHB_o *)0x0) break;
      bVar2 = NBLEEDEAPHB__ONNMMOCEJNN(__this,(MethodInfo *)0x0);
      pSVar3 = (BHHMMBFKGGN->fields).ACMGAPIMMJI;
      bVar8 = bVar8 & bVar2;
      index = index + 1;
    } while (pSVar3 != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

