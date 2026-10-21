// TypeDefIndex 3440
// Namespace: 
// public class LIFECPAILNA.BJKDAMLKHMA
// Fields:
//   public DOCABGGCCIL OENECBFNGGH; // 0x10
//   public float MCFPOCKJGBM; // 0x18

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3564E20]
// LIFECPAILNA.BJKDAMLKHMA$$.ctor @ RVA 0x3564E20

void LIFECPAILNA_BJKDAMLKHMA___ctor
               (LIFECPAILNA_BJKDAMLKHMA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  RewardCurrency_o *__this_01;
  float fVar2;
  
  if ((DAT_04568be8 & 1) == 0) {
    FUN_01bab630(&EFOFNLEFLNH_TypeInfo);
    FUN_01bab630(&HFCOLPLEANG_TypeInfo);
    FUN_01bab630(&RewardCurrency_TypeInfo);
    FUN_01bab630(&MFFKCPDBFPG_TypeInfo);
    FUN_01bab630(&OCOEAJMJEOP_TypeInfo);
    FUN_01bab630(&StringLiteral_9186/*"Money"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_11311/*"Resistance"*/);
    FUN_01bab630(&StringLiteral_8679/*"Lottery"*/);
    FUN_01bab630(&StringLiteral_14891/*"Weight"*/);
    DAT_04568be8 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
LAB_03665090:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (System_Xml_XmlAttributeCollection_o *)
              (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                        (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03665090;
  LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                          (__this_00,StringLiteral_14891/*"Weight"*/,(MethodInfo *)0x0);
  fVar2 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,1.0,(MethodInfo *)0x0);
  (__this->fields).MCFPOCKJGBM = fVar2;
  a = (System_String_o *)
      (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
  bVar1 = System_String__op_Equality(a,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
  if (bVar1) {
    __this_01 = (RewardCurrency_o *)thunk_FUN_01bda818(OCOEAJMJEOP_TypeInfo);
    OCOEAJMJEOP___ctor((OCOEAJMJEOP_o *)__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_9186/*"Money"*/,(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = (RewardCurrency_o *)thunk_FUN_01bda818(HFCOLPLEANG_TypeInfo);
      HFCOLPLEANG___ctor((HFCOLPLEANG_o *)__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_4921/*"Currency"*/,(MethodInfo *)0x0);
      if (bVar1) {
        __this_01 = (RewardCurrency_o *)thunk_FUN_01bda818(RewardCurrency_TypeInfo);
        RewardCurrency___ctor(__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_11311/*"Resistance"*/,(MethodInfo *)0x0);
        if (bVar1) {
          __this_01 = (RewardCurrency_o *)thunk_FUN_01bda818(EFOFNLEFLNH_TypeInfo);
          EFOFNLEFLNH___ctor((EFOFNLEFLNH_o *)__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
        }
        else {
          bVar1 = System_String__op_Equality(a,StringLiteral_8679/*"Lottery"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            (__this->fields).OENECBFNGGH = (DOCABGGCCIL_o *)0x0;
            __this_01 = (RewardCurrency_o *)0x0;
            goto LAB_03665074;
          }
          __this_01 = (RewardCurrency_o *)thunk_FUN_01bda818(MFFKCPDBFPG_TypeInfo);
          MFFKCPDBFPG___ctor((MFFKCPDBFPG_o *)__this_01,AHDGNOJPPIB,0,0,(MethodInfo *)0x0);
        }
      }
    }
  }
  (__this->fields).OENECBFNGGH = (DOCABGGCCIL_o *)__this_01;
LAB_03665074:
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  return;
}

