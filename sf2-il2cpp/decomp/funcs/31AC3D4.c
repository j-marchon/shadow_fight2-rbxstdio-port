// BackKeyManager$$OnBackKeyClicked @ RVA 0x31AC3D4

void BackKeyManager__OnBackKeyClicked(BackKeyManager_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *EDEHNHIHDDH;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  NDPMLPGANCI_o *__this_00;
  long lVar6;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  UnityEngine_Object_o *x;
  undefined4 local_14;
  
  if ((DAT_04566b4e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<HAFLPBGEGCI>__);
    FUN_01bab630(&HAFLPBGEGCI_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HAFLPBGEGCI>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04566b4e = 1;
    method = extraout_x1;
  }
  EDEHNHIHDDH = (System_Collections_Generic_List_T__o *)(__this->fields).EEFJHDPNBNG;
  if (EDEHNHIHDDH == (System_Collections_Generic_List_T__o *)0x0) {
LAB_032ac618:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((EDEHNHIHDDH->fields)._size < 1) {
    if ((__this->fields).HAOGEDJMEGB == false) {
      if (DAT_04565e5a == '\0') {
        FUN_01bab630(&KJFLIAMBKEB_TypeInfo,method);
        DAT_04565e5a = '\x01';
      }
      switch(KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
      case 3:
                    /* try { // try from 032ac58c to 033ac89b has its CatchHandler @ 032ac58c
                       catch() { ... } // from try @ 032ac58c with catch @ 032ac58c
                       catch() { ... } // from try @ 032aca4c with catch @ 032ac58c
                       catch() { ... } // from try @ 032acb38 with catch @ 032ac58c
                       catch() { ... } // from try @ 032acb40 with catch @ 032ac58c
                       catch() { ... } // from try @ 032acc24 with catch @ 032ac58c */
        JJPNLEPEAFM__OFBBGLDBEOK((MethodInfo *)0x0);
        return;
      case 4:
      case 5:
      case 7:
        __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EKPAFDJIAGI
                    (__this_00,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                     (MethodInfo *)0x0);
          return;
        }
        goto LAB_032ac618;
      case 6:
        lVar6 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01b81620();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01b81620();
        }
        x = (UnityEngine_Object_o *)**(undefined8 **)(lVar6 + 0xb8);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (x == (UnityEngine_Object_o *)0x0) goto LAB_032ac618;
          if ((FCJBEKHDLAF_o *)x[6].klass != (FCJBEKHDLAF_o *)0x0) {
            FCJBEKHDLAF__BLONDPEMNHJ((FCJBEKHDLAF_o *)x[6].klass,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pIVar3 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                       (EDEHNHIHDDH,Method_DJNBJHPDKDP_KIKGKKGDCKK<HAFLPBGEGCI>__);
    local_14 = 0;
    uVar4 = thunk_FUN_01bda448(int_TypeInfo,&local_14);
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_032ac618;
    pIVar7 = pIVar3->klass;
    uVar1._0_1_ = (pIVar7->_2).rank;
    uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HAFLPBGEGCI_TypeInfo) {
          pVVar5 = pIVar7->vtable + *piVar9;
          goto LAB_032ac564;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,HAFLPBGEGCI_TypeInfo,0);
LAB_032ac564:
    (*pVVar5->methodPtr)(pIVar3,uVar4,pVVar5->method);
  }
  return;
}

