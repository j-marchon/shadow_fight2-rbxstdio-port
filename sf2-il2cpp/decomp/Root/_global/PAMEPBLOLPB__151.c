// TypeDefIndex 151
// Namespace: 
// public class PAMEPBLOLPB
// Fields:
//   protected XmlNode HJKLIDCAEOE; // 0x10
//   public AFFHKININGD JFFPIOMOOPF; // 0x18
//   protected int KHIBOGMCNJA; // 0x20
//   protected int AAECGBAMDEL; // 0x24
//   protected long DKMPMFFECBK; // 0x28
//   protected int GHPHFGBIPCI; // 0x30
//   private int GPIIGPOLINL; // 0x34
//   private int EMDEPINBPMF; // 0x38
//   private int NFGAGEIDGPJ; // 0x3C
//   private int KFBMNNNBMEL; // 0x40
//   private int PDGFJEOGJOB; // 0x44
//   private int IKGEDJDFCBA; // 0x48
//   private int KOANEAEMOOP; // 0x4C
//   public bool DCNLAEJAKIE; // 0x50
//   private long JJDACOBBFNB; // 0x58
//   private long GKGHELAOIBG; // 0x60
//   private long BGFEJOHINAG; // 0x68
//   private string NEEIBKGPKBK; // 0x70

// ===== public void HMMOOLJEJOJ(int CJNHFNHJHPE)  [RVA 0x30205F0]
// PAMEPBLOLPB$$HMMOOLJEJOJ @ RVA 0x30205F0

void PAMEPBLOLPB__HMMOOLJEJOJ(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  AFFHKININGD_o *__this_00;
  int32_t *piVar6;
  
                    /* try { // try from 03120608 to 0322061f has its CatchHandler @ 03120ba0 */
  if ((DAT_04565c41 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11010/*"RandomRuleSeed"*/);
    DAT_04565c41 = 1;
  }
  piVar6 = &(__this->fields).KOANEAEMOOP;
  *piVar6 = CJNHFNHJHPE;
                    /* try { // try from 03120628 to 0322062f has its CatchHandler @ 03120b60 */
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0312064c to 0322064f has its CatchHandler @ 03120b0c */
                    /* try { // try from 03120650 to 0322065f has its CatchHandler @ 03120b5c */
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03120660 to 0322066b has its CatchHandler @ 03120b58 */
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (bVar1) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(pSVar2,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 0312068c to 03220697 has its CatchHandler @ 03120b1c */
        if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
           (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
           pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031206f0;
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11010/*"RandomRuleSeed"*/,(MethodInfo *)0x0);
      }
      pSVar5 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* try { // try from 031206b4 to 032206c7 has its CatchHandler @ 03120b34 */
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        __this_00 = (__this->fields).JFFPIOMOOPF;
        if (__this_00 != (AFFHKININGD_o *)0x0) {
                    /* try { // try from 031206d4 to 032206e3 has its CatchHandler @ 03120b54 */
          AFFHKININGD__DBLLCDJCJIJ(__this_00,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_031206f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HOONFLPHAIL(int CJNHFNHJHPE)  [RVA 0x30206F4]
// PAMEPBLOLPB$$HOONFLPHAIL @ RVA 0x30206F4

void PAMEPBLOLPB__HOONFLPHAIL(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
                    /* try { // try from 031206f4 to 0322071b has its CatchHandler @ 03120b8c */
  if ((DAT_04565c42 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5620/*"EclipseCompletedCount"*/);
    DAT_04565c42 = 1;
  }
  piVar4 = &(__this->fields).EMDEPINBPMF;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 0312073c to 0322073f has its CatchHandler @ 03120bb8 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03120740 to 03220747 has its CatchHandler @ 03120b50 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_5620/*"EclipseCompletedCount"*/,(MethodInfo *)0x0);
                    /* try { // try from 03120758 to 0322077b has its CatchHandler @ 03120b30 */
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03120784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long FICKJKKEHMG()  [RVA 0x302078C]
// PAMEPBLOLPB$$FICKJKKEHMG @ RVA 0x302078C

int64_t PAMEPBLOLPB__FICKJKKEHMG(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).JJDACOBBFNB;
}


// ===== public int GEKMKDPOEFG()  [RVA 0x3020794]
// PAMEPBLOLPB$$GEKMKDPOEFG @ RVA 0x3020794

int32_t PAMEPBLOLPB__GEKMKDPOEFG(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
                    /* try { // try from 03120794 to 032207bb has its CatchHandler @ 03120bcc */
  return (__this->fields).KHIBOGMCNJA;
}


// ===== public int GNONLAEFLHN()  [RVA 0x302079C]
// PAMEPBLOLPB$$GNONLAEFLHN @ RVA 0x302079C

int32_t PAMEPBLOLPB__GNONLAEFLHN(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).AAECGBAMDEL;
}


// ===== public XmlNode NBLFIEEHECP()  [RVA 0x30207A4]
// PAMEPBLOLPB$$NBLFIEEHECP @ RVA 0x30207A4

System_Xml_XmlNode_o * PAMEPBLOLPB__NBLFIEEHECP(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).HJKLIDCAEOE;
}


// ===== public void HJPCKFNFNCP(int CJNHFNHJHPE)  [RVA 0x30207AC]
// PAMEPBLOLPB$$HJPCKFNFNCP @ RVA 0x30207AC

void PAMEPBLOLPB__HJPCKFNFNCP(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
                    /* try { // try from 031207c4 to 032207df has its CatchHandler @ 03120b9c */
  if ((DAT_04565c43 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5621/*"EclipseLossCount"*/);
    DAT_04565c43 = 1;
  }
  piVar4 = &(__this->fields).NFGAGEIDGPJ;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031207e8 to 032207ff has its CatchHandler @ 03120b98 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_5621/*"EclipseLossCount"*/,(MethodInfo *)0x0);
                    /* try { // try from 03120810 to 03220827 has its CatchHandler @ 03120b2c */
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03120834 to 0322083f has its CatchHandler @ 03120b00 */
                    /* WARNING: Could not recover jumptable at 0x0312083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03120840 to 0322085b has its CatchHandler @ 03120b28 */
  FUN_01bab8c8();
}


// ===== public void AKJBHHAHMPG(int CJNHFNHJHPE)  [RVA 0x3020844]
// PAMEPBLOLPB$$AKJBHHAHMPG @ RVA 0x3020844

void PAMEPBLOLPB__AKJBHHAHMPG(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c44 & 1) == 0) {
                    /* try { // try from 03120864 to 0322087f has its CatchHandler @ 03120b94 */
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    DAT_04565c44 = 1;
  }
  piVar4 = &(__this->fields).GHPHFGBIPCI;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03120890 to 032208a7 has its CatchHandler @ 03120b24 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
                    /* try { // try from 031208b0 to 032208c7 has its CatchHandler @ 03120b90 */
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031208d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031208d8 to 032208df has its CatchHandler @ 03120b3c */
  FUN_01bab8c8();
}


// ===== private void LCDKIBDIDPA()  [RVA 0x30208DC]
// PAMEPBLOLPB$$LCDKIBDIDPA @ RVA 0x30208DC

void PAMEPBLOLPB__LCDKIBDIDPA(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c45 & 1) == 0) {
                    /* try { // try from 031208f4 to 032208fb has its CatchHandler @ 03120b14 */
    FUN_01bab630(&StringLiteral_12431/*"StoryCount"*/);
    DAT_04565c45 = 1;
  }
  piVar4 = &(__this->fields).PDGFJEOGJOB;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
                    /* try { // try from 03120914 to 0322091b has its CatchHandler @ 03120af4 */
  *piVar4 = *piVar4 + 1;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03120930 to 03220937 has its CatchHandler @ 03120af8 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_12431/*"StoryCount"*/,(MethodInfo *)0x0);
                    /* try { // try from 0312094c to 03220953 has its CatchHandler @ 03120af0 */
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0312096c to 0322096f has its CatchHandler @ 03120bb8 */
                    /* WARNING: Could not recover jumptable at 0x03120970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CPIINGDCHIH(int CJNHFNHJHPE)  [RVA 0x3020978]
// PAMEPBLOLPB$$CPIINGDCHIH @ RVA 0x3020978

void PAMEPBLOLPB__CPIINGDCHIH(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  int32_t *piVar6;
  
                    /* try { // try from 03120978 to 03220997 has its CatchHandler @ 03120bc8 */
  if ((DAT_04565c46 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11006/*"RandomGroupSeed"*/);
                    /* try { // try from 031209a4 to 032209ab has its CatchHandler @ 03120b18 */
    DAT_04565c46 = 1;
  }
  piVar6 = &(__this->fields).IKGEDJDFCBA;
                    /* try { // try from 031209ac to 032209fb has its CatchHandler @ 031203d4 */
  *piVar6 = CJNHFNHJHPE;
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar4,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (bVar1) {
                    /* try { // try from 031209fc to 03220a03 has its CatchHandler @ 03120aec */
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(pSVar2,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 03120a1c to 03220a1f has its CatchHandler @ 03120bb8 */
        if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
           (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
           pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_03120a5c;
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_11006/*"RandomGroupSeed"*/,(MethodInfo *)0x0);
      }
                    /* try { // try from 03120a34 to 03220a3b has its CatchHandler @ 03120ae8 */
      pSVar5 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03120a54 to 03220a57 has its CatchHandler @ 03120bb8 */
                    /* WARNING: Could not recover jumptable at 0x03120a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 03120a58 to 03220a63 has its CatchHandler @ 031203d4 */
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
LAB_03120a5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FHIKFLHPLEP(long CJNHFNHJHPE)  [RVA 0x3020A60]
// PAMEPBLOLPB$$FHIKFLHPLEP @ RVA 0x3020A60

void PAMEPBLOLPB__FHIKFLHPLEP(PAMEPBLOLPB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  int64_t iVar2;
  
  lVar1 = (__this->fields).JJDACOBBFNB;
                    /* try { // try from 03120a64 to 03220aab has its CatchHandler @ 03120b84 */
  iVar2 = CJNHFNHJHPE - lVar1;
  if (lVar1 < 1) {
    iVar2 = -1;
  }
  (__this->fields).BGFEJOHINAG = iVar2;
  return;
}


// ===== public void HHCDIDGFNHI(long CJNHFNHJHPE)  [RVA 0x3020A78]
// PAMEPBLOLPB$$HHCDIDGFNHI @ RVA 0x3020A78

void PAMEPBLOLPB__HHCDIDGFNHI(PAMEPBLOLPB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int64_t *__this_01;
  
  if ((DAT_04565c47 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11013/*"RandomizeTimeLeft"*/);
    DAT_04565c47 = 1;
  }
  __this_01 = &(__this->fields).JJDACOBBFNB;
  *__this_01 = CJNHFNHJHPE;
                    /* try { // try from 03120aac to 03220aaf has its CatchHandler @ 03120b7c */
  pSVar1 = (__this->fields).HJKLIDCAEOE;
                    /* try { // try from 03120ab0 to 03220ab3 has its CatchHandler @ 03120b78 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03120ab4 to 03220ab7 has its CatchHandler @ 03120b74 */
                    /* try { // try from 03120ab8 to 03220abb has its CatchHandler @ 03120b70 */
                    /* try { // try from 03120abc to 03220abf has its CatchHandler @ 03120b6c */
                    /* try { // try from 03120ac0 to 03220ac3 has its CatchHandler @ 03120b68 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03120ac4 to 03220ac7 has its CatchHandler @ 03120b64 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03120ac8 to 03220acb has its CatchHandler @ 03120b4c */
                    /* try { // try from 03120acc to 03220acf has its CatchHandler @ 03120b48 */
                    /* try { // try from 03120ad0 to 03220ad3 has its CatchHandler @ 03120b44 */
                    /* try { // try from 03120ad4 to 03220ad7 has its CatchHandler @ 03120b40 */
                    /* try { // try from 03120ad8 to 03220adb has its CatchHandler @ 03120b38 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_11013/*"RandomizeTimeLeft"*/,(MethodInfo *)0x0);
                    /* try { // try from 03120adc to 03220adf has its CatchHandler @ 03120b08 */
                    /* try { // try from 03120ae0 to 03220ae3 has its CatchHandler @ 03120b04 */
                    /* try { // try from 03120ae4 to 03220ae7 has its CatchHandler @ 03120afc */
                    /* catch() { ... } // from try @ 03120a34 with catch @ 03120ae8
                       try { // try from 03120ae8 to 03220be7 has its CatchHandler @ 031203d4 */
      pSVar3 = System_Int64__ToString((int64_t)__this_01,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031209fc with catch @ 03120aec */
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 0312094c with catch @ 03120af0 */
                    /* catch() { ... } // from try @ 03120914 with catch @ 03120af4 */
                    /* catch() { ... } // from try @ 03120930 with catch @ 03120af8 */
                    /* catch() { ... } // from try @ 03120ae4 with catch @ 03120afc */
                    /* catch() { ... } // from try @ 03120834 with catch @ 03120b00 */
                    /* catch() { ... } // from try @ 03120ae0 with catch @ 03120b04 */
                    /* WARNING: Could not recover jumptable at 0x03120b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 03120adc with catch @ 03120b08 */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0312064c with catch @ 03120b0c */
  FUN_01bab8c8();
}


// ===== public void EFGDFGAPFDN(string CJNHFNHJHPE)  [RVA 0x3020B10]
// PAMEPBLOLPB$$EFGDFGAPFDN @ RVA 0x3020B10

void PAMEPBLOLPB__EFGDFGAPFDN(PAMEPBLOLPB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
                    /* catch() { ... } // from try @ 03120588 with catch @ 03120b10 */
                    /* catch() { ... } // from try @ 031208f4 with catch @ 03120b14 */
                    /* catch() { ... } // from try @ 031209a4 with catch @ 03120b18 */
                    /* catch() { ... } // from try @ 0312068c with catch @ 03120b1c */
                    /* catch() { ... } // from try @ 03120578 with catch @ 03120b20 */
                    /* catch() { ... } // from try @ 03120890 with catch @ 03120b24 */
                    /* catch() { ... } // from try @ 03120840 with catch @ 03120b28 */
  if ((DAT_04565c48 & 1) == 0) {
                    /* catch() { ... } // from try @ 03120810 with catch @ 03120b2c */
                    /* catch() { ... } // from try @ 03120758 with catch @ 03120b30 */
                    /* catch() { ... } // from try @ 031206b4 with catch @ 03120b34 */
    FUN_01bab630(&StringLiteral_7235/*"IDS"*/);
                    /* catch() { ... } // from try @ 03120ad8 with catch @ 03120b38 */
                    /* catch() { ... } // from try @ 031208d8 with catch @ 03120b3c */
    DAT_04565c48 = 1;
  }
  ppSVar5 = &(__this->fields).NEEIBKGPKBK;
                    /* catch() { ... } // from try @ 03120ad4 with catch @ 03120b40 */
  *ppSVar5 = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 03120ad0 with catch @ 03120b44 */
                    /* catch() { ... } // from try @ 03120acc with catch @ 03120b48 */
                    /* catch() { ... } // from try @ 03120ac8 with catch @ 03120b4c */
  thunk_FUN_01c20e04(ppSVar5,CJNHFNHJHPE);
                    /* catch() { ... } // from try @ 03120740 with catch @ 03120b50 */
  pSVar1 = (__this->fields).HJKLIDCAEOE;
                    /* catch() { ... } // from try @ 031206d4 with catch @ 03120b54 */
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 03120660 with catch @ 03120b58 */
                    /* catch() { ... } // from try @ 03120650 with catch @ 03120b5c */
                    /* catch() { ... } // from try @ 03120628 with catch @ 03120b60 */
                    /* catch() { ... } // from try @ 03120ac4 with catch @ 03120b64 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03120ac0 with catch @ 03120b68 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03120abc with catch @ 03120b6c */
                    /* catch() { ... } // from try @ 03120ab8 with catch @ 03120b70 */
                    /* catch() { ... } // from try @ 03120ab4 with catch @ 03120b74 */
                    /* catch() { ... } // from try @ 03120ab0 with catch @ 03120b78 */
                    /* catch() { ... } // from try @ 03120aac with catch @ 03120b7c */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_7235/*"IDS"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03120520 with catch @ 03120b80 */
      pSVar4 = *ppSVar5;
                    /* catch() { ... } // from try @ 03120a64 with catch @ 03120b84 */
                    /* catch() { ... } // from try @ 03120508 with catch @ 03120b88 */
                    /* catch() { ... } // from try @ 031206f4 with catch @ 03120b8c */
                    /* catch() { ... } // from try @ 031208b0 with catch @ 03120b90 */
                    /* catch() { ... } // from try @ 03120864 with catch @ 03120b94 */
                    /* catch() { ... } // from try @ 031207e8 with catch @ 03120b98 */
                    /* catch() { ... } // from try @ 031207c4 with catch @ 03120b9c */
      if ((pSVar4 != (System_String_o *)0x0) &&
         (uVar3 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                            (pSVar4,(pSVar4->klass->vtable)._3_ToString.method),
         pSVar2 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* catch() { ... } // from try @ 03120608 with catch @ 03120ba0 */
                    /* catch() { ... } // from try @ 031205e8 with catch @ 03120ba4 */
                    /* catch() { ... } // from try @ 031205c8 with catch @ 03120ba8 */
                    /* catch() { ... } // from try @ 031205a8 with catch @ 03120bac */
                    /* catch() { ... } // from try @ 03120554 with catch @ 03120bb0 */
                    /* catch() { ... } // from try @ 03120530 with catch @ 03120bb4 */
                    /* WARNING: Could not recover jumptable at 0x03120bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 03120504 with catch @ 03120bb8
                       catch() { ... } // from try @ 0312051c with catch @ 03120bb8
                       catch() { ... } // from try @ 0312073c with catch @ 03120bb8
                       catch() { ... } // from try @ 0312096c with catch @ 03120bb8
                       catch() { ... } // from try @ 03120a1c with catch @ 03120bb8
                       catch() { ... } // from try @ 03120a54 with catch @ 03120bb8 */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,uVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031204d0 with catch @ 03120bbc */
  FUN_01bab8c8();
}


// ===== public long IMAKPJNJIJF()  [RVA 0x3020BC0]
// PAMEPBLOLPB$$IMAKPJNJIJF @ RVA 0x3020BC0

int64_t PAMEPBLOLPB__IMAKPJNJIJF(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).GKGHELAOIBG;
}


// ===== public long IEMNJCLKOIP()  [RVA 0x3020BC8]
// PAMEPBLOLPB$$IEMNJCLKOIP @ RVA 0x3020BC8

int64_t PAMEPBLOLPB__IEMNJCLKOIP(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03120978 with catch @ 03120bc8 */
                    /* catch() { ... } // from try @ 03120794 with catch @ 03120bcc */
  return (__this->fields).DKMPMFFECBK;
}


// ===== public bool KPGJMIHLENM(long EOPPCJFJGCI)  [RVA 0x3020BD0]
// PAMEPBLOLPB$$KPGJMIHLENM @ RVA 0x3020BD0

bool PAMEPBLOLPB__KPGJMIHLENM(PAMEPBLOLPB_o *__this,int64_t EOPPCJFJGCI,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = (__this->fields).BGFEJOHINAG;
                    /* try { // try from 03120be8 to 03220beb has its CatchHandler @ 03120c30 */
  if (EOPPCJFJGCI <= lVar1 || lVar1 == -1) {
    PAMEPBLOLPB__FCLKGNDPKDI(__this,(MethodInfo *)EOPPCJFJGCI);
  }
                    /* try { // try from 03120bf8 to 03220bff has its CatchHandler @ 03120c2c */
                    /* try { // try from 03120c00 to 03220c17 has its CatchHandler @ 031203d4 */
  return EOPPCJFJGCI <= lVar1 || lVar1 == -1;
}


// ===== public int PCAEGBFIBEB()  [RVA 0x3020D40]
// PAMEPBLOLPB$$PCAEGBFIBEB @ RVA 0x3020D40

int32_t PAMEPBLOLPB__PCAEGBFIBEB(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).KOANEAEMOOP;
}


// ===== public void KNFNEFGHCCH(int CJNHFNHJHPE)  [RVA 0x3020D48]
// PAMEPBLOLPB$$KNFNEFGHCCH @ RVA 0x3020D48

void PAMEPBLOLPB__KNFNEFGHCCH(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c49 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8677/*"LossCount"*/);
    DAT_04565c49 = 1;
  }
  piVar4 = &(__this->fields).KHIBOGMCNJA;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_8677/*"LossCount"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03120dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string FIPBJBNLJLB()  [RVA 0x3020DE0]
// PAMEPBLOLPB$$FIPBJBNLJLB @ RVA 0x3020DE0

System_String_o * PAMEPBLOLPB__FIPBJBNLJLB(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  DNELIPCHKLK_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c4a & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    DAT_04565c4a = 1;
    method = extraout_x1;
  }
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo,method);
  DNELIPCHKLK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (DNELIPCHKLK_o *)0x0) {
    DNELIPCHKLK__LGOFNFEIKFB(__this_00,(__this->fields).NEEIBKGPKBK,(MethodInfo *)0x0);
    return (__this_00->fields).GJFJPLHCBKJ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CHNEAPJJIOG()  [RVA 0x3020E50]
// PAMEPBLOLPB$$CHNEAPJJIOG @ RVA 0x3020E50

void PAMEPBLOLPB__CHNEAPJJIOG(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c4b & 1) == 0) {
    FUN_01bab630(&StringLiteral_5621/*"EclipseLossCount"*/);
    DAT_04565c4b = 1;
  }
  piVar4 = &(__this->fields).NFGAGEIDGPJ;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  *piVar4 = *piVar4 + 1;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_5621/*"EclipseLossCount"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03120ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3020EEC]
// PAMEPBLOLPB$$.ctor @ RVA 0x3020EEC

void PAMEPBLOLPB___ctor(PAMEPBLOLPB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  AFFHKININGD_o **ppAVar3;
  System_Xml_XmlNode_o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  int64_t iVar8;
  System_String_o **ppSVar9;
  PAMEPBLOLPB_Fields *pPVar10;
  
  if ((DAT_04565c4c & 1) == 0) {
    FUN_01bab630(&StringLiteral_12431/*"StoryCount"*/);
    FUN_01bab630(&StringLiteral_4543/*"CompletedCount"*/);
    FUN_01bab630(&StringLiteral_11010/*"RandomRuleSeed"*/);
    FUN_01bab630(&StringLiteral_13797/*"TimeLeft"*/);
    FUN_01bab630(&StringLiteral_1325/*"-1|-1|-1"*/);
    FUN_01bab630(&StringLiteral_1322/*"-1"*/);
    FUN_01bab630(&StringLiteral_5620/*"EclipseCompletedCount"*/);
    FUN_01bab630(&StringLiteral_4544/*"CompletedTime"*/);
    FUN_01bab630(&StringLiteral_5621/*"EclipseLossCount"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_8677/*"LossCount"*/);
    FUN_01bab630(&StringLiteral_11013/*"RandomizeTimeLeft"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_11006/*"RandomGroupSeed"*/);
    FUN_01bab630(&StringLiteral_7235/*"IDS"*/);
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04565c4c = 1;
  }
  ppSVar9 = &(__this->fields).NEEIBKGPKBK;
  *ppSVar9 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar9);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).BGFEJOHINAG = 0;
  (__this->fields).GKGHELAOIBG = -1;
  ppAVar3 = &(__this->fields).JFFPIOMOOPF;
  *ppAVar3 = (AFFHKININGD_o *)0x0;
  thunk_FUN_01c20e04(ppAVar3,0);
  pPVar10 = &__this->fields;
  pPVar10->HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(pPVar10,AHDGNOJPPIB);
  pSVar4 = pPVar10->HJKLIDCAEOE;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD(pPVar10->HJKLIDCAEOE,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0)
        ;
        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar6,StringLiteral_1322/*"-1"*/,(pSVar6->klass->vtable)._10_set_Value.method);
      }
      pSVar4 = pPVar10->HJKLIDCAEOE;
      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_7235/*"IDS"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
          if (bVar1) {
            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                               (pPVar10->HJKLIDCAEOE,StringLiteral_7235/*"IDS"*/,(MethodInfo *)0x0);
            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar6,StringLiteral_1325/*"-1|-1|-1"*/,(pSVar6->klass->vtable)._10_set_Value.method);
          }
          pSVar4 = pPVar10->HJKLIDCAEOE;
          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_4543/*"CompletedCount"*/,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
              if (bVar1) {
                pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                   (pPVar10->HJKLIDCAEOE,StringLiteral_4543/*"CompletedCount"*/,(MethodInfo *)0x0);
                if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar6,StringLiteral_1567/*"0"*/,(pSVar6->klass->vtable)._10_set_Value.method);
              }
              pSVar4 = pPVar10->HJKLIDCAEOE;
              if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar5,StringLiteral_8677/*"LossCount"*/,(MethodInfo *)0x0);
                  bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                  if (bVar1) {
                    pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                       (pPVar10->HJKLIDCAEOE,StringLiteral_8677/*"LossCount"*/,(MethodInfo *)0x0);
                    if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                    (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                              (pSVar6,StringLiteral_1567/*"0"*/,
                               (pSVar6->klass->vtable)._10_set_Value.method);
                  }
                  pSVar4 = pPVar10->HJKLIDCAEOE;
                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                       (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar5,StringLiteral_5620/*"EclipseCompletedCount"*/,(MethodInfo *)0x0);
                      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                      if (bVar1) {
                        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                           (pPVar10->HJKLIDCAEOE,StringLiteral_5620/*"EclipseCompletedCount"*/,
                                            (MethodInfo *)0x0);
                        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                  (pSVar6,StringLiteral_1567/*"0"*/,
                                   (pSVar6->klass->vtable)._10_set_Value.method);
                      }
                      pSVar4 = pPVar10->HJKLIDCAEOE;
                      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                           (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method
                                           );
                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar5,StringLiteral_5621/*"EclipseLossCount"*/,(MethodInfo *)0x0);
                          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                          if (bVar1) {
                            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                               (pPVar10->HJKLIDCAEOE,StringLiteral_5621/*"EclipseLossCount"*/,
                                                (MethodInfo *)0x0);
                            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                      (pSVar6,StringLiteral_1567/*"0"*/,
                                       (pSVar6->klass->vtable)._10_set_Value.method);
                          }
                          pSVar4 = pPVar10->HJKLIDCAEOE;
                          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                               (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.
                                                       method);
                            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar5,StringLiteral_12431/*"StoryCount"*/,(MethodInfo *)0x0);
                              bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                              if (bVar1) {
                                pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                   (pPVar10->HJKLIDCAEOE,StringLiteral_12431/*"StoryCount"*/,
                                                    (MethodInfo *)0x0);
                                if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_031217f0;
                                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                          (pSVar6,StringLiteral_1567/*"0"*/,
                                           (pSVar6->klass->vtable)._10_set_Value.method);
                              }
                              pSVar4 = pPVar10->HJKLIDCAEOE;
                              if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                         (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                                   (pSVar4,(pSVar4->klass->vtable).
                                                           _16_get_Attributes.method);
                                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar5,StringLiteral_4544/*"CompletedTime"*/,(MethodInfo *)0x0);
                                  bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                                  if (bVar1) {
                                    pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                       (pPVar10->HJKLIDCAEOE,StringLiteral_4544/*"CompletedTime"*/,
                                                        (MethodInfo *)0x0);
                                    if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                    goto LAB_031217f0;
                                    (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                              (pSVar6,StringLiteral_1567/*"0"*/,
                                               (pSVar6->klass->vtable)._10_set_Value.method);
                                  }
                                  pSVar4 = pPVar10->HJKLIDCAEOE;
                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                                       (pSVar4,(pSVar4->klass->vtable).
                                                               _16_get_Attributes.method);
                                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar5,StringLiteral_13797/*"TimeLeft"*/,
                                                          (MethodInfo *)0x0);
                                      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0);
                                      if (bVar1) {
                                        pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                           (pPVar10->HJKLIDCAEOE,StringLiteral_13797/*"TimeLeft"*/
                                                            ,(MethodInfo *)0x0);
                                        if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                        goto LAB_031217f0;
                                        (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                                  (pSVar6,StringLiteral_1567/*"0"*/,
                                                   (pSVar6->klass->vtable)._10_set_Value.method);
                                      }
                                      pSVar4 = pPVar10->HJKLIDCAEOE;
                                      if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                 (*(pSVar4->klass->vtable)._16_get_Attributes.
                                                   methodPtr)(pSVar4,(pSVar4->klass->vtable).
                                                                     _16_get_Attributes.method);
                                        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                                          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                             (pSVar5,StringLiteral_11013/*"RandomizeTimeLeft"*/,
                                                              (MethodInfo *)0x0);
                                          bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar6,(MethodInfo *)0x0)
                                          ;
                                          if (bVar1) {
                                            pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                               (pPVar10->HJKLIDCAEOE,
                                                                StringLiteral_11013/*"RandomizeTimeLeft"*/,
                                                                (MethodInfo *)0x0);
                                            if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                            goto LAB_031217f0;
                                            (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                                      (pSVar6,StringLiteral_1567/*"0"*/,
                                                       (pSVar6->klass->vtable)._10_set_Value.method)
                                            ;
                                          }
                                          pSVar4 = pPVar10->HJKLIDCAEOE;
                                          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                     (*(pSVar4->klass->vtable)._16_get_Attributes.
                                                       methodPtr)(pSVar4,(pSVar4->klass->vtable).
                                                                         _16_get_Attributes.method);
                                            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0
                                               ) {
                                              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                                 (pSVar5,StringLiteral_8409/*"Level"*/,
                                                                  (MethodInfo *)0x0);
                                              bVar1 = EIABCPKDEBD__OBECCOPBADO
                                                                (pSVar6,(MethodInfo *)0x0);
                                              if (bVar1) {
                                                pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                                                                   (pPVar10->HJKLIDCAEOE,
                                                                    StringLiteral_8409/*"Level"*/,
                                                                    (MethodInfo *)0x0);
                                                if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0)
                                                goto LAB_031217f0;
                                                (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                                                          (pSVar6,StringLiteral_1567/*"0"*/,
                                                           (pSVar6->klass->vtable)._10_set_Value.
                                                           method);
                                              }
                                              pSVar4 = pPVar10->HJKLIDCAEOE;
                                              if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                         (*(pSVar4->klass->vtable).
                                                           _16_get_Attributes.methodPtr)
                                                                   (pSVar4,(pSVar4->klass->vtable).
                                                                           _16_get_Attributes.method
                                                                   );
                                                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *
                                                              )0x0) {
                                                  pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_7235/*"IDS"*/,
                                                             (MethodInfo *)0x0);
                                                  pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                                                                     (pSVar6,StringLiteral_1/*""*/,
                                                                      (MethodInfo *)0x0);
                                                  *ppSVar9 = pSVar7;
                                                  thunk_FUN_01c20e04(ppSVar9,pSVar7);
                                                  pSVar4 = pPVar10->HJKLIDCAEOE;
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                             (*(pSVar4->klass->vtable).
                                                               _16_get_Attributes.methodPtr)
                                                                       (pSVar4,(pSVar4->klass->
                                                                               vtable).
                                                  _16_get_Attributes.method);
                                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o
                                                                 *)0x0) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_7230/*"ID"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).GPIIGPOLINL = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_4543/*"CompletedCount"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).AAECGBAMDEL = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_8677/*"LossCount"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).KHIBOGMCNJA = iVar2;
                                                  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
                                                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                                                             (*(pSVar4->klass->vtable).
                                                               _16_get_Attributes.methodPtr)
                                                                       (pSVar4,(pSVar4->klass->
                                                                               vtable).
                                                  _16_get_Attributes.method);
                                                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o
                                                                 *)0x0) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_5620/*"EclipseCompletedCount"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).EMDEPINBPMF = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_5621/*"EclipseLossCount"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).NFGAGEIDGPJ = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_13797/*"TimeLeft"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar8 = EIABCPKDEBD__HNIGPBMJJOL
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).DKMPMFFECBK = iVar8;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_11013/*"RandomizeTimeLeft"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar8 = EIABCPKDEBD__HNIGPBMJJOL
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).JJDACOBBFNB = iVar8;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_12431/*"StoryCount"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).PDGFJEOGJOB = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_8409/*"Level"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).GHPHFGBIPCI = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_11006/*"RandomGroupSeed"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  pSVar4 = (__this->fields).HJKLIDCAEOE;
                                                  (__this->fields).IKGEDJDFCBA = iVar2;
                                                  if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
                                                     (pSVar5 = (System_Xml_XmlAttributeCollection_o
                                                                *)(*(pSVar4->klass->vtable).
                                                                    _16_get_Attributes.methodPtr)
                                                                            (pSVar4,(pSVar4->klass->
                                                                                    vtable).
                                                  _16_get_Attributes.method),
                                                  pSVar5 != (System_Xml_XmlAttributeCollection_o *)
                                                            0x0)) {
                                                    pSVar6 = 
                                                  System_Xml_XmlAttributeCollection__get_ItemOf
                                                            (pSVar5,StringLiteral_11010/*"RandomRuleSeed"*/,
                                                             (MethodInfo *)0x0);
                                                  iVar2 = EIABCPKDEBD__EHJNCGCICMP
                                                                    (pSVar6,0,(MethodInfo *)0x0);
                                                  (__this->fields).KOANEAEMOOP = iVar2;
                                                  (__this->fields).KFBMNNNBMEL = 0;
                                                  (__this->fields).DCNLAEJAKIE =
                                                       (__this->fields).IKGEDJDFCBA != 0 ||
                                                       iVar2 != 0;
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031217f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int EOEAKGGDBFH()  [RVA 0x30217F4]
// PAMEPBLOLPB$$EOEAKGGDBFH @ RVA 0x30217F4

int32_t PAMEPBLOLPB__EOEAKGGDBFH(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).GHPHFGBIPCI;
}


// ===== public int DPEFCPDPCMI()  [RVA 0x30217FC]
// PAMEPBLOLPB$$DPEFCPDPCMI @ RVA 0x30217FC

int32_t PAMEPBLOLPB__DPEFCPDPCMI(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).NFGAGEIDGPJ;
}


// ===== public void FCLKGNDPKDI()  [RVA 0x3020C04]
// PAMEPBLOLPB$$FCLKGNDPKDI @ RVA 0x3020C04

void PAMEPBLOLPB__FCLKGNDPKDI(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03120c18 to 03220c1b has its CatchHandler @ 03120c4c */
  if ((DAT_04565c4d & 1) == 0) {
                    /* catch() { ... } // from try @ 03120bf8 with catch @ 03120c2c */
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
                    /* catch() { ... } // from try @ 03120be8 with catch @ 03120c30 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565c4d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03120c44 to 03220c63 has its CatchHandler @ 03120c78 */
                    /* catch() { ... } // from try @ 03120c18 with catch @ 03120c4c */
  if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo,method);
  }
                    /* try { // try from 03120c64 to 03220c6f has its CatchHandler @ 031203d4 */
  iVar1 = LIIFLGALGNK__HLMBDJOGONJ(0x7fffffff,(MethodInfo *)0x0);
                    /* try { // try from 03120c70 to 03220c77 has its CatchHandler @ 03120c78 */
  PAMEPBLOLPB__CPIINGDCHIH(__this,iVar1,in_x2);
                    /* catch() { ... } // from try @ 03120c44 with catch @ 03120c78
                       catch() { ... } // from try @ 03120c70 with catch @ 03120c78 */
  iVar1 = LIIFLGALGNK__HLMBDJOGONJ(0x7fffffff,(MethodInfo *)0x0);
  PAMEPBLOLPB__HMMOOLJEJOJ(__this,iVar1,in_x2);
  (__this->fields).DCNLAEJAKIE = true;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PAMEPBLOLPB__HHCDIDGFNHI(__this,NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,in_x2);
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GDLPIHHIBNN()  [RVA 0x3021804]
// PAMEPBLOLPB$$GDLPIHHIBNN @ RVA 0x3021804

int32_t PAMEPBLOLPB__GDLPIHHIBNN(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).PDGFJEOGJOB;
}


// ===== public void PEMJOKFFAMO(int CJNHFNHJHPE)  [RVA 0x302180C]
// PAMEPBLOLPB$$PEMJOKFFAMO @ RVA 0x302180C

void PAMEPBLOLPB__PEMJOKFFAMO(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c4e & 1) == 0) {
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_04565c4e = 1;
  }
  piVar4 = &(__this->fields).GPIIGPOLINL;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0312189c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MACCOABJJKG()  [RVA 0x30218A4]
// PAMEPBLOLPB$$MACCOABJJKG @ RVA 0x30218A4

void PAMEPBLOLPB__MACCOABJJKG(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c4f & 1) == 0) {
    FUN_01bab630(&StringLiteral_5620/*"EclipseCompletedCount"*/);
    DAT_04565c4f = 1;
  }
  piVar4 = &(__this->fields).EMDEPINBPMF;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  *piVar4 = *piVar4 + 1;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_5620/*"EclipseCompletedCount"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03121938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AMEFHLFPOBH()  [RVA 0x3021940]
// PAMEPBLOLPB$$AMEFHLFPOBH @ RVA 0x3021940

void PAMEPBLOLPB__AMEFHLFPOBH(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c50 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8677/*"LossCount"*/);
    DAT_04565c50 = 1;
  }
  piVar4 = &(__this->fields).KHIBOGMCNJA;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  *piVar4 = *piVar4 + 1;
  (__this->fields).KFBMNNNBMEL = (__this->fields).KFBMNNNBMEL + 1;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_8677/*"LossCount"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031219e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int ONABMDALDLD()  [RVA 0x30219E8]
// PAMEPBLOLPB$$ONABMDALDLD @ RVA 0x30219E8

int32_t PAMEPBLOLPB__ONABMDALDLD(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).IKGEDJDFCBA;
}


// ===== public void DKLPJPMNILO(long CJNHFNHJHPE)  [RVA 0x30219F0]
// PAMEPBLOLPB$$DKLPJPMNILO @ RVA 0x30219F0

void PAMEPBLOLPB__DKLPJPMNILO(PAMEPBLOLPB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int64_t *__this_01;
  
  if ((DAT_04565c51 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13797/*"TimeLeft"*/);
    DAT_04565c51 = 1;
  }
  __this_01 = &(__this->fields).DKMPMFFECBK;
  *__this_01 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_13797/*"TimeLeft"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int64__ToString((int64_t)__this_01,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03121a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CPJBGHBHGID()  [RVA 0x3021A88]
// PAMEPBLOLPB$$CPJBGHBHGID @ RVA 0x3021A88

void PAMEPBLOLPB__CPJBGHBHGID(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c52 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4543/*"CompletedCount"*/);
    DAT_04565c52 = 1;
  }
  piVar4 = &(__this->fields).AAECGBAMDEL;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).KFBMNNNBMEL = 0;
  *piVar4 = *piVar4 + 1;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_4543/*"CompletedCount"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03121b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CKGAMIHJOMC(long CJNHFNHJHPE)  [RVA 0x3021B28]
// PAMEPBLOLPB$$CKGAMIHJOMC @ RVA 0x3021B28

bool PAMEPBLOLPB__CKGAMIHJOMC(PAMEPBLOLPB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = (__this->fields).GKGHELAOIBG;
  return lVar1 < 0 || CJNHFNHJHPE <= lVar1;
}


// ===== public int LKDFHEIIKCH()  [RVA 0x3021B44]
// PAMEPBLOLPB$$LKDFHEIIKCH @ RVA 0x3021B44

int32_t PAMEPBLOLPB__LKDFHEIIKCH(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).EMDEPINBPMF;
}


// ===== public string FBFCPFINNBK()  [RVA 0x3021B4C]
// PAMEPBLOLPB$$FBFCPFINNBK @ RVA 0x3021B4C

System_String_o * PAMEPBLOLPB__FBFCPFINNBK(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).NEEIBKGPKBK;
}


// ===== public void KNGPIGCIGOE(int CJNHFNHJHPE)  [RVA 0x3021B54]
// PAMEPBLOLPB$$KNGPIGCIGOE @ RVA 0x3021B54

void PAMEPBLOLPB__KNGPIGCIGOE(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c53 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12431/*"StoryCount"*/);
    DAT_04565c53 = 1;
  }
  piVar4 = &(__this->fields).PDGFJEOGJOB;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03121bac to 03221cf7 has its CatchHandler @ 03121bac
                       catch() { ... } // from try @ 03121bac with catch @ 03121bac
                       catch() { ... } // from try @ 03121e4c with catch @ 03121bac
                       catch() { ... } // from try @ 03121f30 with catch @ 03121bac
                       catch() { ... } // from try @ 03121f38 with catch @ 03121bac
                       catch() { ... } // from try @ 03121f4c with catch @ 03121bac
                       catch() { ... } // from try @ 03122020 with catch @ 03121bac */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_12431/*"StoryCount"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03121be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int JEFNAFNDFHK()  [RVA 0x3021BEC]
// PAMEPBLOLPB$$JEFNAFNDFHK @ RVA 0x3021BEC

int32_t PAMEPBLOLPB__JEFNAFNDFHK(PAMEPBLOLPB_o *__this,MethodInfo *method)

{
  return (__this->fields).KFBMNNNBMEL;
}


// ===== public void DNNBHOPPCPL(int CJNHFNHJHPE)  [RVA 0x3021BF4]
// PAMEPBLOLPB$$DNNBHOPPCPL @ RVA 0x3021BF4

void PAMEPBLOLPB__DNNBHOPPCPL(PAMEPBLOLPB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04565c54 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4543/*"CompletedCount"*/);
    DAT_04565c54 = 1;
  }
  piVar4 = &(__this->fields).AAECGBAMDEL;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_4543/*"CompletedCount"*/,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)piVar4,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03121c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EFDNABIEPAP(long CJNHFNHJHPE)  [RVA 0x3021C8C]
// PAMEPBLOLPB$$EFDNABIEPAP @ RVA 0x3021C8C

void PAMEPBLOLPB__EFDNABIEPAP(PAMEPBLOLPB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  long lVar1;
  int64_t iVar2;
  
  lVar1 = (__this->fields).DKMPMFFECBK;
  iVar2 = CJNHFNHJHPE - lVar1;
  if (lVar1 < 1) {
    iVar2 = -1;
  }
  (__this->fields).GKGHELAOIBG = iVar2;
  return;
}

