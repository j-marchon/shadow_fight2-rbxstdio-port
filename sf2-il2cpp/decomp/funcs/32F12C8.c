// NCNJEIBHGBH$$PEABBFJGFKC @ RVA 0x32F12C8

void NCNJEIBHGBH__PEABBFJGFKC(NCNJEIBHGBH_o *__this,System_String_o *BGCBJECODII,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  JBGPNJEDALF_o *__this_00;
  BCGLDKLKKDA_o *HBHPFKJMGCK;
  BCGLDKLKKDA_o *__this_01;
  System_Collections_Generic_List_BCGLDKLKKDA__o *GGBBGNMJIEI;
  JOAIBHHONIM_o *__this_02;
  GCPFDLNAFDF_c *pGVar6;
  BCGLDKLKKDA_array *pBVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_0456768d & 1) == 0) {
    FUN_01bab630(&BCGLDKLKKDA_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&JOAIBHHONIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NewsDialog_TypeInfo);
    DAT_0456768d = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
    pGVar6 = pGVar4->klass;
    uVar1._0_1_ = (pGVar6->_2).rank;
    uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pGVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar5 = pGVar6->vtable + (*piVar9 + 3);
          goto LAB_033f13cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HFHIKPAKJFG_TypeInfo,3);
LAB_033f13cc:
    __this_00 = (JBGPNJEDALF_o *)(*pVVar5->methodPtr)(pGVar4,pVVar5->method);
    if (__this_00 != (JBGPNJEDALF_o *)0x0) {
      HBHPFKJMGCK = JBGPNJEDALF__KKCADOCOFFP(__this_00,BGCBJECODII,(MethodInfo *)0x0);
      if (HBHPFKJMGCK == (BCGLDKLKKDA_o *)0x0) {
        HCAICJLDDJO__MPOLDGKHPMF(6,BGCBJECODII,(MethodInfo *)0x0);
        return;
      }
      __this_01 = (BCGLDKLKKDA_o *)thunk_FUN_01bda818(BCGLDKLKKDA_TypeInfo);
      BCGLDKLKKDA___ctor(__this_01,HBHPFKJMGCK,(MethodInfo *)0x0);
      GGBBGNMJIEI = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,
                 Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
      lVar3 = Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__;
      if (GGBBGNMJIEI != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
        pBVar7 = (GGBBGNMJIEI->fields)._items;
        (GGBBGNMJIEI->fields)._version = (GGBBGNMJIEI->fields)._version + 1;
        if (pBVar7 != (BCGLDKLKKDA_array *)0x0) {
          uVar2 = (GGBBGNMJIEI->fields)._size;
          if (uVar2 < (uint)pBVar7->max_length) {
            (GGBBGNMJIEI->fields)._size = uVar2 + 1;
            pBVar7->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04(pBVar7->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          __this_02 = (JOAIBHHONIM_o *)thunk_FUN_01bda818(JOAIBHHONIM_TypeInfo);
          JOAIBHHONIM___ctor(__this_02,GGBBGNMJIEI,(MethodInfo *)0x0);
          JJPNLEPEAFM__HMCOHIKNIJP(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

