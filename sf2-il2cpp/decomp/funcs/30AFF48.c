// CFEANGJDHEE$$DHAAGKPHJLA @ RVA 0x30AFF48

void CFEANGJDHEE__DHAAGKPHJLA
               (System_String_o *DIHAKADKIKM,UnityEngine_Color32_o EFJKPCADGJH,MethodInfo *method)

{
  uint uVar1;
  CFEANGJDHEE_JNHFDLGPFNI_o item;
  long lVar2;
  CFEANGJDHEE_c *pCVar3;
  CFEANGJDHEE_o *pCVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_x0;
  MethodInfo *in_x4;
  CFEANGJDHEE_JNHFDLGPFNI_array *pCVar5;
  System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *pSVar6;
  CFEANGJDHEE_JNHFDLGPFNI_o __this;
  System_String_c *local_40;
  UnityEngine_Color32_Fields UStack_38;
  
  if ((DAT_045661d8 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_get_Count__);
    DAT_045661d8 = 1;
  }
  pCVar3 = CFEANGJDHEE_TypeInfo;
  if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
    pCVar3 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
  }
  pCVar4 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar3);
  if (pCVar4 != (CFEANGJDHEE_o *)0x0) {
    pSVar6 = (pCVar4->fields).FAMNALIFEHI;
    local_40 = (System_String_c *)0x0;
    UStack_38.rgba = 0;
    UStack_38.r = 0;
    UStack_38.g = 0;
    UStack_38.b = 0;
    UStack_38.a = 0;
    __this.fields.EFJKPCADGJH.fields = (UnityEngine_Color32_Fields)DIHAKADKIKM;
    __this.fields.NONPLOOOOAG = (System_String_o *)&local_40;
    CFEANGJDHEE_JNHFDLGPFNI___ctor
              (__this,(System_String_o *)((ulong)EFJKPCADGJH.fields & 0xffffffff),
               (UnityEngine_Color32_o)0x0,in_x4);
    lVar2 = Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_Add__;
    if (pSVar6 != (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0) {
      item.fields.EFJKPCADGJH.fields = UStack_38;
      item.fields.NONPLOOOOAG = (System_String_o *)local_40;
      pCVar5 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pCVar5 != (CFEANGJDHEE_JNHFDLGPFNI_array *)0x0) {
        uVar1 = (pSVar6->fields)._size;
        if (uVar1 < (uint)pCVar5->max_length) {
          (pSVar6->fields)._size = uVar1 + 1;
          pCVar5->m_Items[(int)uVar1].fields.NONPLOOOOAG = (System_String_o *)local_40;
          pCVar5->m_Items[(int)uVar1].fields.EFJKPCADGJH.fields = UStack_38;
          method_00 = (MethodInfo *)thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,0);
        }
        else {
          System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__AddWithResize
                    (pSVar6,item,
                     *(MethodInfo_2770130 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          method_00 = extraout_x0;
        }
        pCVar4 = CFEANGJDHEE__AIHNLLGNBLC(method_00);
        if ((pCVar4 != (CFEANGJDHEE_o *)0x0) &&
           (pSVar6 = (pCVar4->fields).FAMNALIFEHI,
           pSVar6 != (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0)) {
          if (1000 < (pSVar6->fields)._size) {
            pCVar3 = CFEANGJDHEE_TypeInfo;
            if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
              pCVar3 = (CFEANGJDHEE_c *)thunk_FUN_01ba7564();
            }
            pCVar4 = CFEANGJDHEE__AIHNLLGNBLC((MethodInfo *)pCVar3);
            if ((pCVar4 == (CFEANGJDHEE_o *)0x0) ||
               (pSVar6 = (pCVar4->fields).FAMNALIFEHI,
               pSVar6 == (System_Collections_Generic_List_CFEANGJDHEE_JNHFDLGPFNI__o *)0x0))
            goto LAB_031b00b0;
            System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>__RemoveAt
                      (pSVar6,0,
                       Method_System_Collections_Generic_List<CFEANGJDHEE_JNHFDLGPFNI>_RemoveAt__);
          }
          return;
        }
      }
    }
  }
LAB_031b00b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

