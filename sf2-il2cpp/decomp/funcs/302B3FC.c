// Nekki.SF2.GUI.SimpleScroll$$JKALGOKABOK @ RVA 0x302B3FC

void Nekki_SF2_GUI_SimpleScroll__JKALGOKABOK
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t NFGLPIJICGF,MethodInfo *method)

{
  UnityEngine_RectTransform_o *PCGLODOMIMD;
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *LJNNKKMHFGO;
  System_String_o *pSVar2;
  System_String_o *str3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  MethodInfo *pMVar3;
  long lVar4;
  uint uVar5;
  UnityEngine_RectTransform_o *PLDLIICJOEC;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Vector2_o MJBMLNKAPGC;
  
  do {
    pMVar3 = (MethodInfo *)(ulong)(uint)NFGLPIJICGF;
    if ((DAT_04565cc0 & 1) == 0) {
      FUN_01bab630(&UnityEngine_Debug_TypeInfo);
      FUN_01bab630(&UnityEngine_Object_TypeInfo);
      FUN_01bab630(&StringLiteral_6480);
      FUN_01bab630(&StringLiteral_181);
      DAT_04565cc0 = 1;
      pMVar3 = extraout_x1;
    }
    if (NFGLPIJICGF < 1) {
      return;
    }
    __this_00 = Nekki_SF2_GUI_SimpleScroll__FNJPFFGAMPF(__this,pMVar3);
    LJNNKKMHFGO = Nekki_SF2_GUI_SimpleScroll__CDDJEKNJPEN(__this,method_00);
    if ((__this->fields).super.m_Vertical == false) {
      if ((__this->fields).super.m_Horizontal != false) {
        if ((__this->fields).KFDLOCBGNEA.fields.x < 0.0) goto LAB_0312b4b8;
        if (0.0 < (__this->fields).KFDLOCBGNEA.fields.x) goto LAB_0312b4d0;
      }
LAB_0312b4dc:
      uVar5 = 0;
      PLDLIICJOEC = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      fVar6 = (__this->fields).KFDLOCBGNEA.fields.y;
      if (0.0 < fVar6) {
LAB_0312b4b8:
        uVar5 = 1;
        PLDLIICJOEC = LJNNKKMHFGO;
      }
      else {
        if (0.0 <= fVar6) goto LAB_0312b4dc;
LAB_0312b4d0:
        uVar5 = 0;
        PLDLIICJOEC = __this_00;
      }
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)PLDLIICJOEC,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    bVar1 = Nekki_SF2_GUI_SimpleScroll__MEIKBHLKJJK
                      (__this,PLDLIICJOEC,(bool)(SUB41(uVar5,0) ^ 1),in_x3);
    if (!bVar1) {
      return;
    }
    if ((__this_00 == (UnityEngine_RectTransform_o *)0x0) ||
       (pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0),
       LJNNKKMHFGO == (UnityEngine_RectTransform_o *)0x0)) {
LAB_0312b6cc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    str3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)LJNNKKMHFGO,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)0x0;
    pSVar2 = System_String__Concat
                       (StringLiteral_6480,pSVar2,StringLiteral_181,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    PCGLODOMIMD = __this_00;
    if (uVar5 == 0) {
      PCGLODOMIMD = LJNNKKMHFGO;
      LJNNKKMHFGO = __this_00;
    }
    in_x3 = (MethodInfo *)(ulong)uVar5;
    Nekki_SF2_GUI_SimpleScroll__EPFNMJMKCMO
              (__this,(UnityEngine_Transform_o *)LJNNKKMHFGO,(UnityEngine_Transform_o *)PCGLODOMIMD,
               SUB41(uVar5,0),pMVar3);
    lVar4 = *(long *)&(__this->fields).ANKHPKGAHCA;
    if (lVar4 == 0) goto LAB_0312b6cc;
    fVar6 = *(float *)(lVar4 + 0x60);
    if (DAT_0455fa7e == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa7e = '\x01';
    }
    if (PLDLIICJOEC == (UnityEngine_RectTransform_o *)0x0) goto LAB_0312b6cc;
    fVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x;
    fVar7 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y;
    UVar9 = UnityEngine_RectTransform__get_rect(PLDLIICJOEC,(MethodInfo *)0x0);
    fVar7 = fVar6 * fVar7 + UVar9.fields.m_Height;
    fVar6 = fVar6 * fVar8 + UVar9.fields.m_Width;
    fVar8 = -fVar7;
    if (uVar5 == 0) {
      fVar8 = fVar7;
    }
    if ((__this->fields).super.m_Vertical != false) {
      fVar6 = 0.0;
      fVar7 = fVar8;
    }
    bVar1 = (__this->fields).super.m_Horizontal != false;
    if (bVar1) {
      fVar7 = 0.0;
    }
    if (bVar1 && uVar5 == 0) {
      fVar6 = -fVar6;
    }
    UnityEngine_UI_ScrollRect__StopMovement((UnityEngine_UI_ScrollRect_o *)__this,(MethodInfo *)0x0)
    ;
    fVar8 = (__this->fields).AOLPGMKLBGK.fields.y;
    (__this->fields).AOLPGMKLBGK.fields.x = (__this->fields).AOLPGMKLBGK.fields.x + fVar6;
    (__this->fields).AOLPGMKLBGK.fields.y = fVar8 + fVar7;
    MJBMLNKAPGC.fields.y = fVar7;
    MJBMLNKAPGC.fields.x = fVar6;
    Nekki_SF2_GUI_SimpleScroll__PBDJKOPCAOK(__this,MJBMLNKAPGC,method_01);
    Nekki_SF2_GUI_SimpleScroll__RebuildLayout(__this,method_02);
    *(undefined2 *)&(__this->fields).NMIHOKCDLMP = 2;
    NFGLPIJICGF = NFGLPIJICGF - 1;
  } while( true );
}

