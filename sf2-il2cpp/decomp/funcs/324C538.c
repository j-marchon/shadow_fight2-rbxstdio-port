// PHGCJKBCONG$$MAHFCKJGBPP @ RVA 0x324C538

void PHGCJKBCONG__MAHFCKJGBPP(PHGCJKBCONG_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_UI_Button_o *pUVar3;
  System_Object_array *args;
  long lVar4;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  UnityEngine_Transform_o *INPDGILCEBL;
  SFButton_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar5;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_String_o *pSVar6;
  UnityEngine_UI_Button_o **ppUVar7;
  float fVar8;
  float HDLADBMEOCC;
  UnityEngine_Vector2_o CPFDIFKIPBN;
  
  if ((DAT_04567103 & 1) == 0) {
    FUN_01bab630(&Method_BOFEMGGNODC_GIPCDAILIHJ<Button>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_PHGCJKBCONG_OANGGKCBAOJ__);
    FUN_01bab630(&SFButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10608);
    DAT_04567103 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar6 = (__this->fields).PKBMGDECOPP;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar6 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar6,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_UI_Button_o *)
           BOFEMGGNODC__GIPCDAILIHJ<object>
                     ((BOFEMGGNODC_o *)__this,pSVar6,Method_BOFEMGGNODC_GIPCDAILIHJ<Button>__);
  ppUVar7 = &(__this->fields).MEIDNEHHHKI;
  *ppUVar7 = pUVar3;
  thunk_FUN_01c20e04(ppUVar7);
  pUVar3 = *ppUVar7;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args != (System_Object_array *)0x0) {
      if ((pSVar6 != (System_String_o *)0x0) &&
         (lVar4 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class), lVar4 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = (Il2CppObject *)pSVar6;
        thunk_FUN_01c20e04(args->m_Items,pSVar6);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10608,args,(MethodInfo *)0x0);
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
  else {
    pSVar6 = (__this->fields).PADCNCJAKBF;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = MFBNFJGBPBB__EDBBDECOKAF(MNBMHEAHIIA,pSVar6,(MethodInfo *)0x0);
    (__this->fields).KLGOFMGCGLA = bVar2;
    bVar2 = MFBNFJGBPBB__EDBBDECOKAF(MNBMHEAHIIA,(__this->fields).PGKNGJBGBEH,(MethodInfo *)0x0);
    (__this->fields).HPLBPEKKNBB = bVar2;
    bVar2 = MFBNFJGBPBB__EDBBDECOKAF(MNBMHEAHIIA,(__this->fields).MAIJLNKAEFH,(MethodInfo *)0x0);
    (__this->fields).ILNJNKADLOE = bVar2;
    __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
                    /* try { // try from 0334c774 to 0344c8bf has its CatchHandler @ 0334c774
                       catch() { ... } // from try @ 0334c774 with catch @ 0334c774
                       catch() { ... } // from try @ 0334c95c with catch @ 0334c774
                       catch() { ... } // from try @ 0334ca74 with catch @ 0334c774
                       catch() { ... } // from try @ 0334ca7c with catch @ 0334c774
                       catch() { ... } // from try @ 0334cb1c with catch @ 0334c774 */
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
      if ((__this->fields).KLGOFMGCGLA != false) {
        __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
        if (*ppUVar7 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0334c8f8;
        INPDGILCEBL = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0);
        pSVar6 = (__this->fields).BILMLBCCEAC;
        if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
        }
        CPFDIFKIPBN.fields.x = MFBNFJGBPBB__DCIAJFJIMNK(MNBMHEAHIIA,pSVar6,(MethodInfo *)0x0);
        fVar8 = MFBNFJGBPBB__DCIAJFJIMNK(MNBMHEAHIIA,(__this->fields).JEJFDHNBDDO,(MethodInfo *)0x0)
        ;
        HDLADBMEOCC = MFBNFJGBPBB__DCIAJFJIMNK
                                (MNBMHEAHIIA,(__this->fields).PIJNAPJJGJD,(MethodInfo *)0x0);
        if (__this_01 == (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) goto LAB_0334c8f8;
        CPFDIFKIPBN.fields.y = fVar8;
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                  (__this_01,INPDGILCEBL,CPFDIFKIPBN,HDLADBMEOCC,(MethodInfo *)0x0);
      }
      if (((__this->fields).HPLBPEKKNBB != false) &&
         (__this_02 = (SFButton_o *)*ppUVar7, __this_02 != (SFButton_o *)0x0)) {
        bVar1 = (SFButton_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)SFButton_TypeInfo)) {
          SFButton__set_IsFlashing(__this_02,true,(MethodInfo *)0x0);
        }
      }
      AKJJAPEHKCG__GOCEMJOCNEE
                ((UnityEngine_UI_Selectable_o *)(__this->fields).MEIDNEHHHKI,(MethodInfo *)0x0);
      if ((__this->fields).ILNJNKADLOE != false) {
        if (*ppUVar7 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0334c8f8;
        NAJBHKGHIGK__JKGCKABLLKD
                  ((UnityEngine_Events_UnityEventBase_o *)((*ppUVar7)->fields).m_OnClick,0,
                   (MethodInfo *)0x0);
      }
      if (*ppUVar7 != (UnityEngine_UI_Button_o *)0x0) {
        __this_03 = (UnityEngine_Events_UnityEvent_o *)((*ppUVar7)->fields).m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    /* try { // try from 0334c8c0 to 0344c8e7 has its CatchHandler @ 0334ca98 */
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0334c8f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

