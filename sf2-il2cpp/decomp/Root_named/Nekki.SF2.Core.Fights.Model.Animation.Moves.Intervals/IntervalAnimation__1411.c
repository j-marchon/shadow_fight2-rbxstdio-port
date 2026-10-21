// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Intervals.IntervalAnimation  (obfuscated JADGCGOJLJB)
// TypeDefIndex 1411
// Namespace: 
// public class IntervalAnimation
// Fields:
//   private ObscuredInt <NNEIIMCKKNF>k__BackingField; // 0x10
//   private ObscuredInt GIIJLCDFJAG; // 0x20
//   public ObscuredInt IELLEFEFFJD; // 0x30
//   public ObscuredInt DMNCBADHGJP; // 0x40
//   public string JIJLBFGKNJK; // 0x50
//   private ObscuredInt JDNKKGPNHPB; // 0x58
//   public XmlNode PFONAMNDHOH; // 0x68

// ===== public void GNLPNKGBAFL(IntervalAnimation.IMLPLLLPALI CJNHFNHJHPE)  [RVA 0x317D0F8]
// IntervalAnimation$$GNLPNKGBAFL @ RVA 0x317D0F8

void IntervalAnimation__GNLPNKGBAFL(IntervalAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== public void BDBMIIBHJFM(int CJNHFNHJHPE)  [RVA 0x317D118]
// IntervalAnimation$$BDBMIIBHJFM @ RVA 0x317D118

void IntervalAnimation__BDBMIIBHJFM(IntervalAnimation_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
  (__this->fields).GIIJLCDFJAG.fields = CVar1;
  return;
}


// ===== public ObscuredInt IFPJOBMHPNP()  [RVA 0x317D138]
// IntervalAnimation$$IFPJOBMHPNP @ RVA 0x317D138

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
IntervalAnimation__IFPJOBMHPNP(IntervalAnimation_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
         (__this->fields)._NNEIIMCKKNF_k__BackingField.fields;
}


// ===== protected virtual void BBFCCAOAJII()  [RVA 0x317D144]
// IntervalAnimation$$BBFCCAOAJII @ RVA 0x317D144

void IntervalAnimation__BBFCCAOAJII(IntervalAnimation_o *__this,MethodInfo *method)

{
  return;
}


// ===== private static string DBBCDKEIMGM(IntervalAnimation.IMLPLLLPALI ACCIHBHMFPN)  [RVA 0x317D148]
// IntervalAnimation$$DBBCDKEIMGM @ RVA 0x317D148

System_String_o * IntervalAnimation__DBBCDKEIMGM(int32_t ACCIHBHMFPN,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566994 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_3160/*"Attack"*/);
    FUN_01bab630(&StringLiteral_11798/*"SelfUninterrupt"*/);
    FUN_01bab630(&StringLiteral_14411/*"Uninterrupt"*/);
    FUN_01bab630(&StringLiteral_7903/*"Invulnerable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_7896/*"Invisible"*/);
    FUN_01bab630(&StringLiteral_14546/*"Unstable"*/);
    DAT_04566994 = 1;
  }
  if (ACCIHBHMFPN - 1U < 7) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_14546/*"Unstable"*/_03fc6448)[(int)(ACCIHBHMFPN - 1U)];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public IntervalAnimation.IMLPLLLPALI NHGGBEACKBD()  [RVA 0x317D1FC]
// IntervalAnimation$$NHGGBEACKBD @ RVA 0x317D1FC

int32_t IntervalAnimation__NHGGBEACKBD(IntervalAnimation_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).JDNKKGPNHPB.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public virtual void RandomizeObscuredVars()  [RVA 0x317D20C]
// IntervalAnimation$$RandomizeObscuredVars @ RVA 0x317D20C

void IntervalAnimation__RandomizeObscuredVars(IntervalAnimation_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_04;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.fakeValue;
  uStack_18._4_1_ = (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.fakeValueActive;
  uStack_18._5_1_ = (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.inited;
  uStack_18._6_2_ = *(undefined2 *)&(__this->fields)._NNEIIMCKKNF_k__BackingField.fields.field_0xe;
  local_20._0_4_ = (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.currentCryptoKey;
  local_20._4_4_ = (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.hiddenValue;
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).GIIJLCDFJAG;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  __this_02.fields.fakeValue = 0;
  __this_02.fields.fakeValueActive = false;
  __this_02.fields.inited = false;
  __this_02.fields._14_2_ = 0;
  __this_02.fields._0_8_ = &(__this->fields).IELLEFEFFJD;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
  __this_03.fields.fakeValue = 0;
  __this_03.fields.fakeValueActive = false;
  __this_03.fields.inited = false;
  __this_03.fields._14_2_ = 0;
  __this_03.fields._0_8_ = &(__this->fields).DMNCBADHGJP;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_03,in_x2);
  __this_04.fields.fakeValue = 0;
  __this_04.fields.fakeValueActive = false;
  __this_04.fields.inited = false;
  __this_04.fields._14_2_ = 0;
  __this_04.fields._0_8_ = &(__this->fields).JDNKKGPNHPB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_04,in_x2);
  return;
}


// ===== public void .ctor(IntervalAnimation.IMLPLLLPALI OABGEBHHMBB)  [RVA 0x317D268]
// IntervalAnimation$$.ctor @ RVA 0x317D268

void IntervalAnimation___ctor(IntervalAnimation_o *__this,int32_t OABGEBHHMBB,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(-1,(MethodInfo *)0x0);
  (__this->fields)._NNEIIMCKKNF_k__BackingField.fields = CVar1;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).GIIJLCDFJAG.fields = CVar1;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(OABGEBHHMBB,(MethodInfo *)0x0);
  (__this->fields).JDNKKGPNHPB.fields = CVar1;
  return;
}


// ===== public static IntervalAnimation.IMLPLLLPALI PKKPCLFNEDC(string ACCIHBHMFPN)  [RVA 0x317D2BC]
// IntervalAnimation$$PKKPCLFNEDC @ RVA 0x317D2BC

int32_t IntervalAnimation__PKKPCLFNEDC(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566995 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_3160/*"Attack"*/);
    FUN_01bab630(&StringLiteral_7903/*"Invulnerable"*/);
    FUN_01bab630(&StringLiteral_7896/*"Invisible"*/);
    DAT_04566995 = 1;
  }
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3160/*"Attack"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 4;
  }
  else {
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 5;
    }
    else {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_7903/*"Invulnerable"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 6;
      }
      else {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_7896/*"Invisible"*/,(MethodInfo *)0x0);
        iVar2 = 7;
        if (!bVar1) {
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}


// ===== private void ABGNKEBJOAK(ObscuredInt CJNHFNHJHPE)  [RVA 0x317D3A8]
// IntervalAnimation$$ABGNKEBJOAK @ RVA 0x317D3A8

void IntervalAnimation__ABGNKEBJOAK
               (IntervalAnimation_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._8_8_;
  (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.currentCryptoKey =
       (int)CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.hiddenValue =
       (int)((ulong)CJNHFNHJHPE.fields._0_8_ >> 0x20);
  (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.fakeValue = (int)uVar1;
  (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.fakeValueActive =
       (bool_conflict)(char)((ulong)uVar1 >> 0x20);
  (__this->fields)._NNEIIMCKKNF_k__BackingField.fields.inited =
       (bool_conflict)(char)((ulong)uVar1 >> 0x28);
  *(short *)&(__this->fields)._NNEIIMCKKNF_k__BackingField.fields.field_0xe =
       (short)((ulong)uVar1 >> 0x30);
  return;
}


// ===== public virtual void GIENGNEGHPJ()  [RVA 0x317D3B0]
// IntervalAnimation$$GIENGNEGHPJ @ RVA 0x317D3B0

void IntervalAnimation__GIENGNEGHPJ(IntervalAnimation_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int CJNHFNHJHPE;
  int32_t iVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_Object_array *args;
  Il2CppObject *pIVar8;
  long lVar9;
  undefined8 uVar10;
  System_Xml_XmlNode_o **ppSVar11;
  System_String_o **ppSVar12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04566996 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    FUN_01bab630(&StringLiteral_7629/*"IntervalAnimation: startFrame ({0}) greater then endFrame({1}) ({2}) "*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_5717/*"End"*/);
    FUN_01bab630(&StringLiteral_11798/*"SelfUninterrupt"*/);
    FUN_01bab630(&StringLiteral_14411/*"Uninterrupt"*/);
    FUN_01bab630(&StringLiteral_14546/*"Unstable"*/);
    DAT_04566996 = 1;
  }
  ppSVar11 = &(__this->fields).PFONAMNDHOH;
  pSVar4 = *ppSVar11;
  if (pSVar4 == (System_Xml_XmlNode_o *)0x0) goto LAB_0327d780;
  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
           (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                     (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
  if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0327d780;
  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
  pSVar7 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
  ppSVar12 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar12 = pSVar7;
  thunk_FUN_01c20e04(ppSVar12,pSVar7);
  bVar1 = System_String__op_Equality(*ppSVar12,StringLiteral_14546/*"Unstable"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
LAB_0327d510:
    CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar2,(MethodInfo *)0x0);
    (__this->fields).JDNKKGPNHPB.fields = CVar15;
  }
  else {
    bVar1 = System_String__op_Equality(*ppSVar12,StringLiteral_14411/*"Uninterrupt"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 2;
      goto LAB_0327d510;
    }
    bVar1 = System_String__op_Equality(*ppSVar12,StringLiteral_11798/*"SelfUninterrupt"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 3;
      goto LAB_0327d510;
    }
  }
  pSVar4 = *ppSVar11;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_12346/*"Start"*/,(MethodInfo *)0x0);
      iVar2 = GIAMPEGMNHE__NANCFCIGNEE(pSVar6,0,(MethodInfo *)0x0);
      CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar2,(MethodInfo *)0x0);
      pCVar13 = &(__this->fields).IELLEFEFFJD;
      pSVar4 = (__this->fields).PFONAMNDHOH;
      pCVar13->fields = CVar15;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_5717/*"End"*/,(MethodInfo *)0x0);
          if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
            iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (__this->fields).GIIJLCDFJAG.fields,(MethodInfo *)0x0);
            CJNHFNHJHPE = iVar2 + 2;
          }
          else {
            pSVar4 = *ppSVar11;
            if (pSVar4 == (System_Xml_XmlNode_o *)0x0) goto LAB_0327d780;
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_0327d780;
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_5717/*"End"*/,(MethodInfo *)0x0);
            CJNHFNHJHPE = GIAMPEGMNHE__NANCFCIGNEE(pSVar6,0x7fffffff,(MethodInfo *)0x0);
          }
          CVar15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                             (CJNHFNHJHPE,(MethodInfo *)0x0);
          pCVar14 = &(__this->fields).DMNCBADHGJP;
          pCVar14->fields = CVar15;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).IELLEFEFFJD.fields,(MethodInfo *)0x0);
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)pCVar14->fields,
                             (MethodInfo *)0x0);
          if (iVar2 <= iVar3) {
LAB_0327d748:
            (*(__this->klass->vtable)._4_BBFCCAOAJII.methodPtr)
                      (__this,(__this->klass->vtable)._4_BBFCCAOAJII.method);
            (__this->fields).PFONAMNDHOH = (System_Xml_XmlNode_o *)0x0;
            thunk_FUN_01c20e04(ppSVar11,0);
            return;
          }
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
          uStack_48._0_4_ = (__this->fields).IELLEFEFFJD.fields.fakeValue;
          uStack_48._4_1_ = (__this->fields).IELLEFEFFJD.fields.fakeValueActive;
          uStack_48._5_1_ = (__this->fields).IELLEFEFFJD.fields.inited;
          uStack_48._6_2_ = *(undefined2 *)&(__this->fields).IELLEFEFFJD.fields.field_0xe;
          local_50._0_4_ = (pCVar13->fields).currentCryptoKey;
          local_50._4_4_ = (pCVar13->fields).hiddenValue;
          pIVar8 = (Il2CppObject *)
                   thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                      &local_50);
          if (args != (System_Object_array *)0x0) {
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
               lVar9 == 0)) {
LAB_0327d788:
              uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar10,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = pIVar8;
              thunk_FUN_01c20e04(args->m_Items,pIVar8);
              uStack_58._0_4_ = (__this->fields).DMNCBADHGJP.fields.fakeValue;
              uStack_58._4_1_ = (__this->fields).DMNCBADHGJP.fields.fakeValueActive;
              uStack_58._5_1_ = (__this->fields).DMNCBADHGJP.fields.inited;
              uStack_58._6_2_ = *(undefined2 *)&(__this->fields).DMNCBADHGJP.fields.field_0xe;
              local_60._0_4_ = (pCVar14->fields).currentCryptoKey;
              local_60._4_4_ = (pCVar14->fields).hiddenValue;
              pIVar8 = (Il2CppObject *)
                       thunk_FUN_01bda448(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                          &local_60);
              if ((pIVar8 != (Il2CppObject *)0x0) &&
                 (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
                 lVar9 == 0)) goto LAB_0327d788;
              if (1 < (uint)args->max_length) {
                args->m_Items[1] = pIVar8;
                thunk_FUN_01c20e04(args->m_Items + 1,pIVar8);
                pSVar7 = *ppSVar12;
                if ((pSVar7 != (System_String_o *)0x0) &&
                   (lVar9 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class),
                   lVar9 == 0)) goto LAB_0327d788;
                if (2 < (uint)args->max_length) {
                  args->m_Items[2] = (Il2CppObject *)pSVar7;
                  thunk_FUN_01c20e04(args->m_Items + 2,pSVar7);
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UnityEngine_Debug__LogErrorFormat(StringLiteral_7629/*"IntervalAnimation: startFrame ({0}) greater then endFrame({1}) ({2}) "*/,args,(MethodInfo *)0x0);
                  goto LAB_0327d748;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_0327d780:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x317D794]
// IntervalAnimation$$HNIHOIAMDPC @ RVA 0x317D794

void IntervalAnimation__HNIHOIAMDPC
               (IntervalAnimation_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  System_Xml_XmlNode_o **ppSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  if ((DAT_04566997 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_04566997 = 1;
  }
  ppSVar1 = &(__this->fields).PFONAMNDHOH;
  *ppSVar1 = JHMENEKPIBO;
  thunk_FUN_01c20e04(ppSVar1,JHMENEKPIBO);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
      CJNHFNHJHPE = GIAMPEGMNHE__NANCFCIGNEE(LBJNDMNEJJB,-1,(MethodInfo *)0x0);
      CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      (__this->fields)._NNEIIMCKKNF_k__BackingField.fields = CVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

