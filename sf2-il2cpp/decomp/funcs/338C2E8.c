// Nekki.SF2.GUI.Menu.MenuScroll$$Init @ RVA 0x338C2E8

void Nekki_SF2_GUI_Menu_MenuScroll__Init
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UnityEngine_UI_Image_o *pUVar3;
  float fVar4;
  float in_s3;
  
  pMVar2 = (MethodInfo *)(ulong)(uint)ACCIHBHMFPN;
  if ((DAT_04567be4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567be4 = 1;
    pMVar2 = extraout_x1;
  }
  (__this->fields).JDNKKGPNHPB = ACCIHBHMFPN;
  fVar4 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,pMVar2);
  (__this->fields).FDFCNIMNHFK = fVar4;
  (__this->fields).CurScrollState = 0;
  (__this->fields).KFCLIPMOFFN = true;
  (__this->fields).BDFGFOCANII = false;
  (__this->fields).BEAOMNNKBJA = true;
  (__this->fields).GBAGCMBPGHI = 0.0;
  pUVar3 = (__this->fields)._background;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar2 = extraout_x1_00;
  if (bVar1) {
    pUVar3 = (__this->fields)._background;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
              (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
    (__this->fields).GBAGCMBPGHI = 255.0 / in_s3;
    pMVar2 = extraout_x1_01;
  }
  (__this->fields).KDBFJLCCJHC = false;
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,0.0,0.0,pMVar2);
  return;
}

