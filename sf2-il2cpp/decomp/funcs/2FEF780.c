// Nekki.SF2.GUI.Fight.EndFightScreen$$Init @ RVA 0x2FEF780

void Nekki_SF2_GUI_Fight_EndFightScreen__Init
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar5;
  IGPDCHBJAPD_o *pIVar6;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *pSVar7;
  IGPDCHBJAPD_o **ppIVar8;
  MFFKCPDBFPG_o **ppMVar9;
  System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o **ppSVar10;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar11;
  UnityEngine_Color_o endValue;
  
  if ((DAT_04565a58 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6364);
    FUN_01bab630(&StringLiteral_6365);
    FUN_01bab630(&StringLiteral_6366);
    DAT_04565a58 = 1;
  }
  Nekki_SF2_GUI_Fight_EndFightScreen__PLAIIFOBHLP(__this,false,method);
  ppIVar8 = &(__this->fields).CIKGADOJJMG;
  *ppIVar8 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar8,PNPKEKHEMCD);
  pNVar11 = (__this->fields)._resultHeader;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (*ppIVar8 == (IGPDCHBJAPD_o *)0x0) goto LAB_030ef980;
    bVar3 = IGPDCHBJAPD__DONKDCJLBPN(*ppIVar8,(MethodInfo *)0x0);
    if (*ppIVar8 == (IGPDCHBJAPD_o *)0x0) goto LAB_030ef980;
    bVar4 = IGPDCHBJAPD__GCJHFPGABKL(*ppIVar8,(MethodInfo *)0x0);
    pNVar11 = (__this->fields)._resultHeader;
    if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_030ef980;
    puVar1 = &StringLiteral_6365;
    if (!bVar4) {
      puVar1 = &StringLiteral_6364;
    }
    puVar2 = &StringLiteral_6366;
    if (!bVar3) {
      puVar2 = puVar1;
    }
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (pNVar11,(System_String_o *)*puVar2,(MethodInfo *)0x0);
    pNVar11 = (__this->fields)._resultHeader;
    if (pNVar11 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_030ef980;
    (*(pNVar11->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar11,(pNVar11->klass->vtable)._45_SetNativeSize.method);
  }
  if ((*ppIVar8 != (IGPDCHBJAPD_o *)0x0) &&
     (pIVar5 = ((*ppIVar8)->fields).GIIFANGGEHM, pIVar5 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
    ppMVar9 = &(__this->fields).OFLMHJHPFJM;
    *ppMVar9 = (pIVar5->fields).GPDMCLBBPAD;
    thunk_FUN_01c20e04(ppMVar9);
    pIVar6 = (__this->fields).CIKGADOJJMG;
    if ((pIVar6 != (IGPDCHBJAPD_o *)0x0) &&
       (pIVar5 = (pIVar6->fields).GIIFANGGEHM, pIVar5 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
      ppSVar10 = &(__this->fields).INIAKIIBBHK;
      *ppSVar10 = (pIVar5->fields).OJFMFMHCPOA;
      thunk_FUN_01c20e04(ppSVar10);
      pIVar6 = (__this->fields).CIKGADOJJMG;
      if ((pIVar6 != (IGPDCHBJAPD_o *)0x0) &&
         (pIVar5 = (pIVar6->fields).GIIFANGGEHM, pIVar5 != (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0)) {
        (__this->fields).DIELINNGEBJ = (pIVar5->fields).GMCEHJAIFBJ;
        thunk_FUN_01c20e04();
        bVar3 = Nekki_SF2_GUI_Fight_EndFightScreen__CBNCGMBFHLN(__this,method_00);
        pSVar7 = (__this->fields).INIAKIIBBHK;
        (__this->fields).FPLAPLIHEGF = bVar3;
        (__this->fields).LDLILPHECLE = true;
        if (pSVar7 != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0) {
          (__this->fields).IJINDHBBABM = 0 < (pSVar7->fields)._size;
          endValue.fields.b = 1.0;
          endValue.fields.a = 1.0;
          endValue.fields.r = 1.0;
          endValue.fields.g = 1.0;
          DG_Tweening_DOTweenModuleUI__DOColor
                    ((UnityEngine_UI_Image_o *)(__this->fields)._background,endValue,1.0,
                     (MethodInfo *)0x0);
          Nekki_SF2_GUI_Fight_EndFightScreen__CCLILNDOHAB(__this,method_01);
          return;
        }
      }
    }
  }
LAB_030ef980:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

