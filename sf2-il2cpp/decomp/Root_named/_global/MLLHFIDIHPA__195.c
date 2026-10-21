// TypeDefIndex 195
// Namespace: 
// public class MLLHFIDIHPA : QuestAction
// Fields:
//   private string DPDEAEJBFKA; // 0x68
//   private bool IFJHFNKOFDE; // 0x70
//   private EBGNICNEJFJ CFHOAJAHGBK; // 0x74
//   private string MHDJAEILAJL; // 0x78
//   private string MLPKGJACOFA; // 0x80

// ===== protected override string OFPHPMGMCAL()  [RVA 0x3118938]
// MLLHFIDIHPA$$OFPHPMGMCAL @ RVA 0x3118938

System_String_o * MLLHFIDIHPA__OFPHPMGMCAL(MLLHFIDIHPA_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_045665ce & 1) == 0) {
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_045665ce = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields).DPDEAEJBFKA,StringLiteral_167/*" "*/,(__this->fields).MLPKGJACOFA,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== private void FLDPNAOFBDP()  [RVA 0x3118988]
// MLLHFIDIHPA$$FLDPNAOFBDP @ RVA 0x3118988

void MLLHFIDIHPA__FLDPNAOFBDP(MLLHFIDIHPA_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  long lVar3;
  NDPMLPGANCI_o *pNVar4;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MJHMHBEJFBH_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  undefined1 auVar5 [16];
  
  if ((DAT_045665cf & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&MJHMHBEJFBH_TypeInfo);
    FUN_01bab630(&Method_MLLHFIDIHPA_LGEMJFBPAGO__);
    FUN_01bab630(&Method_MLLHFIDIHPA_LHPLKNMLHBN__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_045665cf = 1;
    method = extraout_x1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields).CFHOAJAHGBK != 5)) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
        (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
      Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
                ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar3 + 0xb8),
                 (__this->fields).CFHOAJAHGBK,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
LAB_03218bc4:
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
      pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                    thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
      if (iVar2 == 7) {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        System_Action<Int32Enum>___ctor();
        if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__EAPNEKLDLLM(pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
          iVar2 = (__this->fields).CFHOAJAHGBK;
          __this_00 = (MJHMHBEJFBH_o *)thunk_FUN_01bda818(MJHMHBEJFBH_TypeInfo);
          MJHMHBEJFBH___ctor(__this_00,iVar2,(MethodInfo *)0x0);
          if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
            bVar1 = NDPMLPGANCI__EKPAFDJIAGI
                              (pNVar4,7,(Il2CppObject *)__this_00,(System_Action_object__o *)0x0,
                               (__this->fields).IFJHFNKOFDE,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            goto LAB_03218bc4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHPLKNMLHBN(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x3118BE0]
// MLLHFIDIHPA$$LHPLKNMLHBN @ RVA 0x3118BE0

void MLLHFIDIHPA__LHPLKNMLHBN(MLLHFIDIHPA_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  UnityEngine_Object_o *x;
  
  if ((DAT_045665d0 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_MLLHFIDIHPA_LHPLKNMLHBN__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_045665d0 = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
        (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) goto LAB_03218d40;
    Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar2 + 0xb8),
               (__this->fields).CFHOAJAHGBK,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_03218d40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3118D44]
// MLLHFIDIHPA$$HNIHOIAMDPC @ RVA 0x3118D44

void MLLHFIDIHPA__HNIHOIAMDPC
               (MLLHFIDIHPA_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_045665d1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3760/*"CallEvents"*/);
    FUN_01bab630(&StringLiteral_12788/*"Tab"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    DAT_045665d1 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_12788/*"Tab"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields).DPDEAEJBFKA = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
        (__this->fields).MHDJAEILAJL = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_3760/*"CallEvents"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
          (__this->fields).IFJHFNKOFDE = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3118E80]
// MLLHFIDIHPA$$MAHFCKJGBPP @ RVA 0x3118E80

void MLLHFIDIHPA__MAHFCKJGBPP(MLLHFIDIHPA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  
  if ((DAT_045665d2 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
                    /* try { // try from 03218eb4 to 03318f6b has its CatchHandler @ 03218eb4
                       catch() { ... } // from try @ 03218eb4 with catch @ 03218eb4
                       catch() { ... } // from try @ 03218fb4 with catch @ 03218eb4
                       catch() { ... } // from try @ 03218ffc with catch @ 03218eb4
                       catch() { ... } // from try @ 03219030 with catch @ 03218eb4
                       catch() { ... } // from try @ 03219060 with catch @ 03218eb4 */
    DAT_045665d2 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).DPDEAEJBFKA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar2,(MethodInfo *)0x0);
  iVar1 = MMOGKBGEPGM__GFLCMDMEOBN(pSVar2,(MethodInfo *)0x0);
  iVar1 = HLHCKNLCOBM__OHCFIOGGNHO(iVar1,(MethodInfo *)0x0);
  (__this->fields).CFHOAJAHGBK = iVar1;
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,(__this->fields).MHDJAEILAJL,(MethodInfo *)0x0);
  (__this->fields).MLPKGJACOFA = pSVar2;
  thunk_FUN_01c20e04();
  MLLHFIDIHPA__FLDPNAOFBDP(__this,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x3118F38]
// MLLHFIDIHPA$$.ctor @ RVA 0x3118F38

void MLLHFIDIHPA___ctor(MLLHFIDIHPA_o *__this,MethodInfo *method)

{
  (__this->fields).IFJHFNKOFDE = true;
  (__this->fields).CFHOAJAHGBK = 5;
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void LGEMJFBPAGO(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x3118F50]
// MLLHFIDIHPA$$LGEMJFBPAGO @ RVA 0x3118F50

void MLLHFIDIHPA__LGEMJFBPAGO(MLLHFIDIHPA_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
                    /* try { // try from 03218f6c to 03318f73 has its CatchHandler @ 03219010 */
  if ((DAT_045665d3 & 1) == 0) {
                    /* try { // try from 03218f80 to 03318f8b has its CatchHandler @ 0321900c */
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo,KDLGNPCKLIJ);
    FUN_01bab630(&Method_MLLHFIDIHPA_LGEMJFBPAGO__);
                    /* try { // try from 03218f98 to 03318f9f has its CatchHandler @ 03219004 */
    DAT_045665d3 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03218fac to 03318fb3 has its CatchHandler @ 03219000 */
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 03218fb4 to 03318ff3 has its CatchHandler @ 03218eb4 */
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__NJBAKIMLGHB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03218ff4 to 03318ffb has its CatchHandler @ 03219008 */
  FUN_01bab8c8();
}

