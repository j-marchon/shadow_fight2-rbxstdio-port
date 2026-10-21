// TypeDefIndex 1870
// Namespace: 
// public class PHGCJKBCONG : BOFEMGGNODC
// Fields:
//   private string PKBMGDECOPP; // 0x68
//   private string PADCNCJAKBF; // 0x70
//   private string PGKNGJBGBEH; // 0x78
//   private string BILMLBCCEAC; // 0x80
//   private string JEJFDHNBDDO; // 0x88
//   private string PIJNAPJJGJD; // 0x90
//   private string MAIJLNKAEFH; // 0x98
//   private Button MEIDNEHHHKI; // 0xA0
//   private bool KLGOFMGCGLA; // 0xA8
//   private bool HPLBPEKKNBB; // 0xA9
//   private bool ILNJNKADLOE; // 0xAA

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x324C538]
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
    FUN_01bab630(&StringLiteral_10608/*"QAClickButton: can't find Button by target '{0}'!"*/);
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
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10608/*"QAClickButton: can't find Button by target '{0}'!"*/,args,(MethodInfo *)0x0);
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


// ===== private void OANGGKCBAOJ()  [RVA 0x324C90C]
// PHGCJKBCONG$$OANGGKCBAOJ @ RVA 0x324C90C

void PHGCJKBCONG__OANGGKCBAOJ(PHGCJKBCONG_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  SFButton_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_02;
  UnityEngine_UI_Button_o **ppUVar2;
  UnityEngine_Events_UnityEvent_o *__this_03;
  
                    /* try { // try from 0334c91c to 0344c947 has its CatchHandler @ 0334ca94 */
  if ((DAT_04567104 & 1) == 0) {
    FUN_01bab630(&Method_PHGCJKBCONG_OANGGKCBAOJ__);
    FUN_01bab630(&SFButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567104 = 1;
  }
                    /* try { // try from 0334c958 to 0344c95b has its CatchHandler @ 0334ca90 */
  if ((__this->fields).KLGOFMGCGLA != false) {
                    /* try { // try from 0334c95c to 0344ca6b has its CatchHandler @ 0334c774 */
    __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) goto LAB_0334ca7c;
    Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
  }
  if (((__this->fields).HPLBPEKKNBB != false) &&
     (__this_01 = (SFButton_o *)(__this->fields).MEIDNEHHHKI, __this_01 != (SFButton_o *)0x0)) {
    bVar1 = (SFButton_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)SFButton_TypeInfo))
    {
      SFButton__set_IsFlashing(__this_01,false,(MethodInfo *)0x0);
    }
  }
  ppUVar2 = &(__this->fields).MEIDNEHHHKI;
  AKJJAPEHKCG__HJDDBKPCAFJ((UnityEngine_UI_Selectable_o *)*ppUVar2,(MethodInfo *)0x0);
  if (*ppUVar2 != (UnityEngine_UI_Button_o *)0x0) {
    __this_03 = (UnityEngine_Events_UnityEvent_o *)((*ppUVar2)->fields).m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_03,call,(MethodInfo *)0x0);
      if ((__this->fields).ILNJNKADLOE != false) {
        if (*ppUVar2 == (UnityEngine_UI_Button_o *)0x0) goto LAB_0334ca7c;
        NAJBHKGHIGK__JKGCKABLLKD
                  ((UnityEngine_Events_UnityEventBase_o *)((*ppUVar2)->fields).m_OnClick,2,
                   (MethodInfo *)0x0);
      }
      *ppUVar2 = (UnityEngine_UI_Button_o *)0x0;
      thunk_FUN_01c20e04(ppUVar2,0);
      __this_02 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_02 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_02,false,(MethodInfo *)0x0);
                    /* try { // try from 0334ca6c to 0344ca6f has its CatchHandler @ 0334ca8c */
                    /* try { // try from 0334ca70 to 0344ca73 has its CatchHandler @ 0334ca88 */
                    /* try { // try from 0334ca74 to 0344ca77 has its CatchHandler @ 0334c774 */
                    /* try { // try from 0334ca78 to 0344ca7b has its CatchHandler @ 0334ca84 */
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0334ca7c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0334ca7c to 0344caa7 has its CatchHandler @ 0334c774 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x324CA80]
// PHGCJKBCONG$$.ctor @ RVA 0x324CA80

void PHGCJKBCONG___ctor(PHGCJKBCONG_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ca78 with catch @ 0334ca84
                        */
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x324CA88]
// PHGCJKBCONG$$HNIHOIAMDPC @ RVA 0x324CA88

void PHGCJKBCONG__HNIHOIAMDPC
               (PHGCJKBCONG_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ca70 with catch @ 0334ca88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ca6c with catch @ 0334ca8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334c958 with catch @ 0334ca90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334c91c with catch @ 0334ca94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334c8c0 with catch @ 0334ca98
                        */
  if ((DAT_04567105 & 1) == 0) {
                    /* try { // try from 0334caa8 to 0344caab has its CatchHandler @ 0334cabc */
    FUN_01bab630(&StringLiteral_14613/*"UseArrow"*/);
    FUN_01bab630(&StringLiteral_14618/*"UseFlashing"*/);
                    /* catch() { ... } // from try @ 0334caa8 with catch @ 0334cabc */
    FUN_01bab630(&StringLiteral_3105/*"ArrowRotation"*/);
    FUN_01bab630(&StringLiteral_3103/*"ArrowOffsetX"*/);
    FUN_01bab630(&StringLiteral_12838/*"Target"*/);
    FUN_01bab630(&StringLiteral_3104/*"ArrowOffsetY"*/);
                    /* try { // try from 0334caf4 to 0344cb1b has its CatchHandler @ 0334cb30 */
    FUN_01bab630(&StringLiteral_7319/*"IgnoreCallback"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04567105 = 1;
  }
                    /* try { // try from 0334cb1c to 0344cb27 has its CatchHandler @ 0334c774 */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
                    /* try { // try from 0334cb28 to 0344cb2f has its CatchHandler @ 0334cb30 */
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0334caf4 with catch @ 0334cb30
                       catch(type#2 @ 00000000) { ... } // from try @ 0334cb28 with catch @ 0334cb30
                        */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_12838/*"Target"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).PKBMGDECOPP = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14613/*"UseArrow"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
        (__this->fields).PADCNCJAKBF = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_14618/*"UseFlashing"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
          (__this->fields).PGKNGJBGBEH = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_3103/*"ArrowOffsetX"*/,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
            (__this->fields).BILMLBCCEAC = pSVar3;
            thunk_FUN_01c20e04();
            pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
            if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0334cc80 to 0344cd73 has its CatchHandler @ 0334cc80
                       catch() { ... } // from try @ 0334cc80 with catch @ 0334cc80
                       catch() { ... } // from try @ 0334ce14 with catch @ 0334cc80
                       catch() { ... } // from try @ 0334ce90 with catch @ 0334cc80
                       catch() { ... } // from try @ 0334ce98 with catch @ 0334cc80
                       catch() { ... } // from try @ 0334cf38 with catch @ 0334cc80 */
              pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar1,StringLiteral_3104/*"ArrowOffsetY"*/,(MethodInfo *)0x0);
              pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
              (__this->fields).JEJFDHNBDDO = pSVar3;
              thunk_FUN_01c20e04();
              pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                       (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar1,StringLiteral_3105/*"ArrowRotation"*/,(MethodInfo *)0x0);
                pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
                (__this->fields).PIJNAPJJGJD = pSVar3;
                thunk_FUN_01c20e04();
                pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                         (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                                   (JHMENEKPIBO,
                                    (JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar1,StringLiteral_7319/*"IgnoreCallback"*/,(MethodInfo *)0x0);
                  pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
                  ppSVar4 = &(__this->fields).MAIJLNKAEFH;
                  *ppSVar4 = pSVar3;
                  thunk_FUN_01c20e04(ppSVar4,pSVar3);
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

