// NLCLFNMIEJC.OCDPFLPEGDO$$NKGBPHDHEPA @ RVA 0x31DC554

void NLCLFNMIEJC_OCDPFLPEGDO__NKGBPHDHEPA
               (NLCLFNMIEJC_OCDPFLPEGDO_o *__this,Core_Configs_Models_LocalDailyQuestInfo_o *q,
               MethodInfo *method)

{
  int32_t OGPGLGPMEPD;
  uint uVar1;
  long lVar2;
  OPHDIHJPHDE_o *__this_00;
  OPHDIHJPHDE_array *pOVar3;
  System_Collections_Generic_List_OPHDIHJPHDE__o *__this_01;
  
  if ((DAT_04566d1b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OPHDIHJPHDE>_Add__);
    FUN_01bab630(&OPHDIHJPHDE_TypeInfo);
    DAT_04566d1b = 1;
  }
  if (q != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
    __this_01 = (__this->fields).result;
    OGPGLGPMEPD = (q->fields)._Id_k__BackingField;
    __this_00 = (OPHDIHJPHDE_o *)thunk_FUN_01bda818(OPHDIHJPHDE_TypeInfo);
    OPHDIHJPHDE___ctor(__this_00,OGPGLGPMEPD,0,false,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<OPHDIHJPHDE>_Add__;
    if (__this_01 != (System_Collections_Generic_List_OPHDIHJPHDE__o *)0x0) {
      pOVar3 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pOVar3 != (OPHDIHJPHDE_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pOVar3->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pOVar3->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,__this_00);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

