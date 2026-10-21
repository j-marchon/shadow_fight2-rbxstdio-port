// TypeDefIndex 2461
// Namespace: Nekki.SF2.GUI.Glyphs
// [ExecuteAlways]
// public abstract class Glyph : MonoBehaviour
// Fields:
//   private static readonly Vector2 NLPAOHIMPNA; // 0x0
//   private RectTransform <MPAMHJJKABE>k__BackingField; // 0x20
//   private int <CBEOMKIMKNO>k__BackingField; // 0x28
//   private BOGDEGPCIJI <FAPFIEABBBO>k__BackingField; // 0x30
//   private int <HEJNKDEACJE>k__BackingField; // 0x38
//   private Nullable<Vector2> <ABODODGIMOO>k__BackingField; // 0x3C

// ===== protected virtual void Awake()  [RVA 0x336E2D0]
// Nekki.SF2.GUI.Glyphs.Glyph$$Awake @ RVA 0x336E2D0

void Nekki_SF2_GUI_Glyphs_Glyph__Awake(Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  return;
}


// ===== public BOGDEGPCIJI get_Params()  [RVA 0x336E2D4]
// Nekki.SF2.GUI.Glyphs.Glyph$$get_Params @ RVA 0x336E2D4

BOGDEGPCIJI_o *
Nekki_SF2_GUI_Glyphs_Glyph__get_Params(Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  return (__this->fields)._FAPFIEABBBO_k__BackingField;
}


// ===== public virtual void ParseParams(AEGOLGIJEBI.MCGKJAGBFKP ADOIANOKIIK, string NEMHOGELCJL)  [RVA 0x336E2DC]
// Nekki.SF2.GUI.Glyphs.Glyph$$ParseParams @ RVA 0x336E2DC

void Nekki_SF2_GUI_Glyphs_Glyph__ParseParams
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,AEGOLGIJEBI_MCGKJAGBFKP_o *ADOIANOKIIK,
               System_String_o *NEMHOGELCJL,MethodInfo *method)

{
  UnityEngine_Vector2_o MJBMLNKAPGC;
  UnityEngine_Color_o EFJKPCADGJH;
  int32_t DHNDOPBLBOI;
  int32_t iVar1;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar2;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar3;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar4;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar5;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar6;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar7;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar8;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar9;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar10;
  BOGDEGPCIJI_o *__this_00;
  BOGDEGPCIJI_o **ppBVar11;
  bool NBKBMNOLGHN;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  UnityEngine_Vector2_o POBPDPGICBA;
  UnityEngine_Color_Fields local_b0;
  
  if ((DAT_04567aff & 1) == 0) {
    FUN_01bab630(&BOGDEGPCIJI_TypeInfo);
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<GPDLLNADCPK>__);
    FUN_01bab630(&StringLiteral_6491/*"FitText2Bounds"*/);
    FUN_01bab630(&StringLiteral_19686/*"min"*/);
    FUN_01bab630(&StringLiteral_19977/*"offsety"*/);
    FUN_01bab630(&StringLiteral_19598/*"max"*/);
    FUN_01bab630(&StringLiteral_19976/*"offsetx"*/);
    FUN_01bab630(&StringLiteral_22160/*"y_align"*/);
    FUN_01bab630(&StringLiteral_21872/*"usedsize"*/);
    FUN_01bab630(&StringLiteral_17122/*"color"*/);
    FUN_01bab630(&StringLiteral_20672/*"scale"*/);
    DAT_04567aff = 1;
  }
  if (ADOIANOKIIK == (AEGOLGIJEBI_MCGKJAGBFKP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this->fields)._CBEOMKIMKNO_k__BackingField = (ADOIANOKIIK->fields).super.FJGOCJKJMAE;
  pAVar2 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_17122/*"color"*/,(MethodInfo *)0x0
                     );
  pAVar3 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_21872/*"usedsize"*/,(MethodInfo *)0x0
                     );
  pAVar4 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_20672/*"scale"*/,(MethodInfo *)0x0
                     );
  pAVar5 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19976/*"offsetx"*/,(MethodInfo *)0x0
                     );
  pAVar6 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19977/*"offsety"*/,(MethodInfo *)0x0
                     );
  pAVar7 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_22160/*"y_align"*/,(MethodInfo *)0x0
                     );
  pAVar8 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19686/*"min"*/,(MethodInfo *)0x0
                     );
  pAVar9 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                     ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_19598/*"max"*/,(MethodInfo *)0x0
                     );
  pAVar10 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK
                      ((AEGOLGIJEBI_JDFHIMLMEJF_o *)ADOIANOKIIK,StringLiteral_6491/*"FitText2Bounds"*/,(MethodInfo *)0x0
                      );
  auVar17 = NEON_fmov(0x3f800000,4);
  local_b0._8_8_ = auVar17._8_8_;
  local_b0._0_8_ = auVar17._0_8_;
  if (pAVar2 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    UnityEngine_ColorUtility__TryParseHtmlString
              ((pAVar2->fields).JAICMIMBIOA,(UnityEngine_Color_o *)&local_b0,(MethodInfo *)0x0);
  }
  if (pAVar9 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar12 = 1000.0;
  }
  else {
    fVar12 = PCOEHCPGBBG__OFFODGKLGOP((pAVar9->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
    fVar12 = (float)NEON_fminnm(fVar12,0x447a0000);
  }
  if (pAVar8 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = PCOEHCPGBBG__OFFODGKLGOP((pAVar8->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (pAVar3 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar14 = (float)(*(__this->klass->vtable)._8_unknown.methodPtr)
                              (__this,(__this->klass->vtable)._8_unknown.method);
    if (fVar14 <= fVar12) {
      fVar12 = fVar14;
    }
    if (fVar14 < fVar13) {
      fVar12 = fVar13;
    }
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e5d == '\0') {
      FUN_01bab630(&MainSettings_TypeInfo);
      DAT_04565e5d = '\x01';
    }
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar13 = fVar12 * MainSettings_TypeInfo->static_fields->CHCLEFKLOKH;
  }
  else {
    fVar14 = PCOEHCPGBBG__OFFODGKLGOP((pAVar3->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
    if ((fVar13 <= fVar14) && (fVar13 = fVar12, fVar14 <= fVar12)) {
      fVar13 = fVar14;
    }
  }
  if (pAVar4 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar12 = 1.0;
  }
  else {
    fVar12 = PCOEHCPGBBG__OFFODGKLGOP((pAVar4->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar14 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if (pAVar5 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar15 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  }
  else {
    fVar15 = PCOEHCPGBBG__OFFODGKLGOP((pAVar5->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (pAVar6 != (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    fVar14 = PCOEHCPGBBG__OFFODGKLGOP((pAVar6->fields).JAICMIMBIOA,0.0,(MethodInfo *)0x0);
  }
  if (pAVar7 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    DHNDOPBLBOI = 1;
  }
  else {
    DHNDOPBLBOI = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            ((pAVar7->fields).JAICMIMBIOA,1,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<GPDLLNADCPK>__);
  }
  fVar16 = (float)(*(__this->klass->vtable)._6_unknown.methodPtr)
                            (__this,(__this->klass->vtable)._6_unknown.method);
  if (pAVar10 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
    NBKBMNOLGHN = true;
  }
  else {
    iVar1 = PCOEHCPGBBG__JBGCINPPLAC((pAVar10->fields).JAICMIMBIOA,1,(MethodInfo *)0x0);
    NBKBMNOLGHN = 0 < iVar1;
  }
  EFJKPCADGJH.fields.b = local_b0.b;
  EFJKPCADGJH.fields.a = local_b0.a;
  EFJKPCADGJH.fields.r = local_b0.r;
  EFJKPCADGJH.fields.g = local_b0.g;
  __this_00 = (BOGDEGPCIJI_o *)thunk_FUN_01bda818(BOGDEGPCIJI_TypeInfo);
  MJBMLNKAPGC.fields.y = fVar14;
  MJBMLNKAPGC.fields.x = fVar15;
  POBPDPGICBA.fields.y = fVar13 * fVar16;
  POBPDPGICBA.fields.x = fVar13;
  BOGDEGPCIJI___ctor(__this_00,POBPDPGICBA,fVar12,DHNDOPBLBOI,EFJKPCADGJH,MJBMLNKAPGC,NBKBMNOLGHN,
                     (MethodInfo *)0x0);
  ppBVar11 = &(__this->fields)._FAPFIEABBBO_k__BackingField;
  *ppBVar11 = __this_00;
  thunk_FUN_01c20e04(ppBVar11,__this_00);
  return;
}


// ===== public void Destroy()  [RVA 0x336E74C]
// Nekki.SF2.GUI.Glyphs.Glyph$$Destroy @ RVA 0x336E74C

void Nekki_SF2_GUI_Glyphs_Glyph__Destroy(Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar2;
  
  if ((DAT_04567b00 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567b00 = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected void MFGIDAHNDGI(Nullable<Vector2> CJNHFNHJHPE)  [RVA 0x336E804]
// Nekki.SF2.GUI.Glyphs.Glyph$$MFGIDAHNDGI @ RVA 0x336E804

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Glyphs_Glyph__MFGIDAHNDGI
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,System_Nullable_Vector2__o CJNHFNHJHPE,
               MethodInfo *method)

{
  undefined8 uVar1;
  
  uVar1 = CJNHFNHJHPE.fields._0_8_;
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue = (bool_conflict)(char)uVar1;
  *(int3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1 =
       (int3)((ulong)uVar1 >> 8);
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x =
       (float)(int)((ulong)uVar1 >> 0x20);
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y =
       CJNHFNHJHPE.fields.value.fields.y;
  return;
}


// ===== public void ComputePosition(TextPic.AIBKGOEIOLC MMEECJEKHGB)  [RVA 0x336E810]
// Nekki.SF2.GUI.Glyphs.Glyph$$ComputePosition @ RVA 0x336E810

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Glyphs_Glyph__ComputePosition
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_01;
  Il2CppObject *pIVar3;
  MethodInfo_26E4ADC *method_00;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar4;
  Il2CppClass *pIVar5;
  UnityEngine_Vector2_o value;
  System_Nullable_Vector2__o __this_02;
  undefined8 local_50;
  float local_48;
  
  if ((DAT_04567b01 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    DAT_04567b01 = 1;
  }
  if (((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
      (__this_00 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField,
      __this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)) &&
     (__this_01 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (__this->fields)._CBEOMKIMKNO_k__BackingField,
                             Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__)
     , __this_01 != (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0)) {
    bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_01,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue = false;
      *(undefined3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1 = 0;
      (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x = 0.0;
      (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y = 0.0;
      return;
    }
    pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
    iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_01,(MethodInfo *)0x0);
    if ((pSVar4 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,iVar2,
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
       pIVar3 != (Il2CppObject *)0x0)) {
      pIVar5 = pIVar3[1].klass;
      pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
      iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_01,(MethodInfo *)0x0);
      if ((pSVar4 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
         (method_00 = Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__,
         pIVar3 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar4,iVar2 + -1,
                             Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
         pIVar3 != (Il2CppObject *)0x0)) {
        local_48 = 0.0;
        value.fields.x = (SUB84(pIVar5,0) + SUB84(pIVar3[1].klass,0)) * 0.5;
        local_50 = 0;
        value.fields.y =
             ((float)((ulong)pIVar5 >> 0x20) + (float)((ulong)pIVar3[1].klass >> 0x20)) * 0.5;
        __this_02.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
        __this_02.fields._0_8_ = &local_50;
        System_Nullable<Vector2>___ctor(__this_02,value,(MethodInfo_27FC874 *)method_00);
        (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue =
             (bool_conflict)(undefined1)local_50;
        *(undefined3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1 =
             local_50._1_3_;
        (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x = (float)local_50._4_4_;
        (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y = local_48;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x336E95C]
// Nekki.SF2.GUI.Glyphs.Glyph$$.cctor @ RVA 0x336E95C

void Nekki_SF2_GUI_Glyphs_Glyph___cctor(MethodInfo *method)

{
  if ((DAT_04567b02 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    DAT_04567b02 = 1;
  }
  (Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->static_fields->NLPAOHIMPNA).fields =
       (UnityEngine_Vector2_Fields)0x3f0000003f000000;
  return;
}


// ===== protected void DFFEJLJIHAE(RectTransform CJNHFNHJHPE)  [RVA 0x336E9A8]
// Nekki.SF2.GUI.Glyphs.Glyph$$DFFEJLJIHAE @ RVA 0x336E9A8

void Nekki_SF2_GUI_Glyphs_Glyph__DFFEJLJIHAE
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,UnityEngine_RectTransform_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._MPAMHJJKABE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public Nullable<Vector2> get_Position()  [RVA 0x336E9B0]
// Nekki.SF2.GUI.Glyphs.Glyph$$get_Position @ RVA 0x336E9B0

System_Nullable_Vector2__o
Nekki_SF2_GUI_Glyphs_Glyph__get_Position(Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  return (System_Nullable_Vector2__o)(__this->fields)._ABODODGIMOO_k__BackingField.fields;
}


// ===== protected void JPEBGLKDLBM(int CJNHFNHJHPE)  [RVA 0x336E9C0]
// Nekki.SF2.GUI.Glyphs.Glyph$$JPEBGLKDLBM @ RVA 0x336E9C0

void Nekki_SF2_GUI_Glyphs_Glyph__JPEBGLKDLBM
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HEJNKDEACJE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static Glyph Create(AEGOLGIJEBI.JDFHIMLMEJF ADOIANOKIIK, Transform JJHEGPBBMLG, GameObject[] KGGEIJMLEGC)  [RVA 0x336E9C8]
// Nekki.SF2.GUI.Glyphs.Glyph$$Create @ RVA 0x336E9C8

Nekki_SF2_GUI_Glyphs_Glyph_o *
Nekki_SF2_GUI_Glyphs_Glyph__Create
          (AEGOLGIJEBI_JDFHIMLMEJF_o *ADOIANOKIIK,UnityEngine_Transform_o *JJHEGPBBMLG,
          UnityEngine_GameObject_array *KGGEIJMLEGC,MethodInfo *method)

{
  uint uVar1;
  AEGOLGIJEBI_BPIAJOBCKFC_o *pAVar2;
  Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *pNVar3;
  Nekki_SF2_GUI_Glyphs_ImageGlyph_o *pNVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  UnityEngine_GameObject_o *HMBLEHNKDIH;
  
  if ((DAT_04567b03 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    FUN_01bab630(&StringLiteral_20268/*"prefabid"*/);
    DAT_04567b03 = 1;
  }
  if (ADOIANOKIIK != (AEGOLGIJEBI_JDFHIMLMEJF_o *)0x0) {
    pAVar2 = AEGOLGIJEBI_JDFHIMLMEJF__BAANAFPJKKK(ADOIANOKIIK,StringLiteral_20268/*"prefabid"*/,(MethodInfo *)0x0)
    ;
    if (pAVar2 == (AEGOLGIJEBI_BPIAJOBCKFC_o *)0x0) {
      pMVar5 = extraout_x1;
      if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar5 = extraout_x1_00;
      }
      pNVar4 = Nekki_SF2_GUI_Glyphs_Glyph__HFBOFKPLLBG(JJHEGPBBMLG,pMVar5);
      return (Nekki_SF2_GUI_Glyphs_Glyph_o *)pNVar4;
    }
    pMVar5 = (MethodInfo *)0x0;
    uVar1 = PCOEHCPGBBG__JBGCINPPLAC((pAVar2->fields).JAICMIMBIOA,0,(MethodInfo *)0x0);
    if (KGGEIJMLEGC != (UnityEngine_GameObject_array *)0x0) {
      if (uVar1 < (uint)KGGEIJMLEGC->max_length) {
        HMBLEHNKDIH = KGGEIJMLEGC->m_Items[(int)uVar1];
        if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
        }
        pNVar3 = Nekki_SF2_GUI_Glyphs_Glyph__LDOABBLILEB(HMBLEHNKDIH,JJHEGPBBMLG,pMVar5);
        return (Nekki_SF2_GUI_Glyphs_Glyph_o *)pNVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateLineID(TextPic.AIBKGOEIOLC MMEECJEKHGB)  [RVA 0x336EC14]
// Nekki.SF2.GUI.Glyphs.Glyph$$UpdateLineID @ RVA 0x336EC14

void Nekki_SF2_GUI_Glyphs_Glyph__UpdateLineID
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567b04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    DAT_04567b04 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._HEJNKDEACJE_k__BackingField = -1;
  if ((MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) ||
     (__this_00 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
     __this_00 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
  iVar2 = 0;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                      );
    if (!bVar1) {
LAB_0346ece8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
      return;
    }
    if ((Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_48.fields._current ==
        (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__NFJIIGCLFOF
                      ((Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_48.fields._current,
                       (__this->fields)._CBEOMKIMKNO_k__BackingField,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._HEJNKDEACJE_k__BackingField = iVar2;
      goto LAB_0346ece8;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


// ===== public virtual void Refresh(List<Bounds> PBEBNABDPFF, float COKDAPPLGKH, bool KLJAOIEBNHL)  [RVA 0x336ED8C]
// Nekki.SF2.GUI.Glyphs.Glyph$$Refresh @ RVA 0x336ED8C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Glyphs_Glyph__Refresh
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,
               System_Collections_Generic_List_Bounds__o *PBEBNABDPFF,float COKDAPPLGKH,
               bool KLJAOIEBNHL,MethodInfo *method)

{
  int iVar1;
  BOGDEGPCIJI_o *pBVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  MethodInfo_27FC88C *method_00;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Vector2_o UVar10;
  System_Nullable_Vector2__o __this_01;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector2_o OCHLLMNLADJ;
  UnityEngine_Bounds_o UStack_88;
  ulong local_70;
  float local_68;
  
  method_00 = (MethodInfo_27FC88C *)(ulong)KLJAOIEBNHL;
  if ((DAT_04567b05 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_get_Item__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    DAT_04567b05 = 1;
  }
  if (((__this->fields)._HEJNKDEACJE_k__BackingField < 0) ||
     (uVar4._0_1_ = (__this->fields)._ABODODGIMOO_k__BackingField.fields.hasValue,
     uVar4._1_3_ = *(undefined3 *)&(__this->fields)._ABODODGIMOO_k__BackingField.fields.field_0x1,
     uVar4._4_4_ = (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.x,
     (uVar4 & 0xff) == 0)) {
    pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
    if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      value = false;
LAB_0346efa4:
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    local_68 = (__this->fields)._ABODODGIMOO_k__BackingField.fields.value.fields.y;
    __this_01.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
    __this_01.fields._0_8_ = &local_70;
    local_70 = uVar4;
    UVar8 = System_Nullable<Vector2>__get_Value(__this_01,method_00);
    pBVar2 = (__this->fields)._FAPFIEABBBO_k__BackingField;
    if (pBVar2 != (BOGDEGPCIJI_o *)0x0) {
      UVar9 = BOGDEGPCIJI__GEPJOMPBPBI(pBVar2,COKDAPPLGKH,(MethodInfo *)0x0);
      if (PBEBNABDPFF != (System_Collections_Generic_List_Bounds__o *)0x0) {
        System_Collections_Generic_List<Bounds>__get_Item
                  (&UStack_88,PBEBNABDPFF,(__this->fields)._HEJNKDEACJE_k__BackingField,
                   Method_System_Collections_Generic_List<Bounds>_get_Item__);
        pBVar2 = (__this->fields)._FAPFIEABBBO_k__BackingField;
        if (pBVar2 != (BOGDEGPCIJI_o *)0x0) {
          iVar1 = (pBVar2->fields)._COIENECLAAM_k__BackingField;
          if (iVar1 == 0) {
            fVar6 = UStack_88.fields.m_Center.fields.y + UStack_88.fields.m_Extents.fields.y +
                    UVar9.fields.y * -0.5;
          }
          else if (iVar1 == 2) {
            fVar6 = UVar9.fields.y * 0.5 +
                    (UStack_88.fields.m_Center.fields.y - UStack_88.fields.m_Extents.fields.y);
          }
          else {
            fVar6 = UVar8.fields.y;
            if (iVar1 == 1) {
              fVar6 = UStack_88.fields.m_Center.fields.y;
            }
          }
          pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            fVar7 = (pBVar2->fields)._BNFHGCOJLAL_k__BackingField.fields.x;
            fVar5 = (pBVar2->fields)._BNFHGCOJLAL_k__BackingField.fields.y;
            UVar10 = UnityEngine_RectTransform__get_pivot(pUVar3,(MethodInfo *)0x0);
            if ((Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            OCHLLMNLADJ.fields.x =
                 UVar10.fields.x -
                 (Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->static_fields->NLPAOHIMPNA).fields.x;
            OCHLLMNLADJ.fields.y =
                 UVar10.fields.y -
                 (Nekki_SF2_GUI_Glyphs_Glyph_TypeInfo->static_fields->NLPAOHIMPNA).fields.y;
            UVar9.fields.y = (float)((ulong)UVar9.fields >> 0x20);
            UVar9 = Util__EFCELKPKECC(UVar9,OCHLLMNLADJ,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              value_00.fields.y = fVar6 + fVar5 + UVar9.fields.y;
              value_00.fields.x = UVar8.fields.x + fVar7 + UVar9.fields.x;
              value_00.fields.z = 0.0;
              UnityEngine_Transform__set_localPosition
                        ((UnityEngine_Transform_o *)pUVar3,value_00,(MethodInfo *)0x0);
              pBVar2 = (__this->fields)._FAPFIEABBBO_k__BackingField;
              if (pBVar2 != (BOGDEGPCIJI_o *)0x0) {
                pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
                UVar8 = BOGDEGPCIJI__GEPJOMPBPBI(pBVar2,COKDAPPLGKH,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar8.fields.y = (float)((ulong)UVar8.fields >> 0x20);
                  UnityEngine_RectTransform__set_sizeDelta(pUVar3,UVar8,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._MPAMHJJKABE_k__BackingField;
                  if ((pUVar3 != (UnityEngine_RectTransform_o *)0x0) &&
                     (__this_00 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
                     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    value = true;
                    goto LAB_0346efa4;
                  }
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


// ===== public int get_LineID()  [RVA 0x336EFD0]
// Nekki.SF2.GUI.Glyphs.Glyph$$get_LineID @ RVA 0x336EFD0

int32_t Nekki_SF2_GUI_Glyphs_Glyph__get_LineID
                  (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  return (__this->fields)._HEJNKDEACJE_k__BackingField;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x336EFD8]
// Nekki.SF2.GUI.Glyphs.Glyph$$get_RectTransform @ RVA 0x336EFD8

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Glyphs_Glyph__get_RectTransform
          (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  return (__this->fields)._MPAMHJJKABE_k__BackingField;
}


// ===== public int get_CharID()  [RVA 0x336EFE0]
// Nekki.SF2.GUI.Glyphs.Glyph$$get_CharID @ RVA 0x336EFE0

int32_t Nekki_SF2_GUI_Glyphs_Glyph__get_CharID
                  (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  return (__this->fields)._CBEOMKIMKNO_k__BackingField;
}


// ===== private static PrefabGlyph LDOABBLILEB(GameObject HMBLEHNKDIH, Transform JJHEGPBBMLG)  [RVA 0x336EAB4]
// Nekki.SF2.GUI.Glyphs.Glyph$$LDOABBLILEB @ RVA 0x336EAB4

Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *
Nekki_SF2_GUI_Glyphs_Glyph__LDOABBLILEB
          (UnityEngine_GameObject_o *HMBLEHNKDIH,UnityEngine_Transform_o *JJHEGPBBMLG,
          MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *pNVar1;
  
  if ((DAT_04567b06 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<PrefabGlyph>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567b06 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)HMBLEHNKDIH,JJHEGPBBMLG,
                      Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pNVar1 = (Nekki_SF2_GUI_Glyphs_PrefabGlyph_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<PrefabGlyph>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void AHDDAFCMHLF(int CJNHFNHJHPE)  [RVA 0x336EFE8]
// Nekki.SF2.GUI.Glyphs.Glyph$$AHDDAFCMHLF @ RVA 0x336EFE8

void Nekki_SF2_GUI_Glyphs_Glyph__AHDDAFCMHLF
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CBEOMKIMKNO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private static ImageGlyph HFBOFKPLLBG(Transform JJHEGPBBMLG)  [RVA 0x336EB54]
// Nekki.SF2.GUI.Glyphs.Glyph$$HFBOFKPLLBG @ RVA 0x336EB54

Nekki_SF2_GUI_Glyphs_ImageGlyph_o *
Nekki_SF2_GUI_Glyphs_Glyph__HFBOFKPLLBG(UnityEngine_Transform_o *JJHEGPBBMLG,MethodInfo *method)

{
  int32_t value;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Glyphs_ImageGlyph_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b07 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ImageGlyph>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    DAT_04567b07 = 1;
    method = extraout_x1;
  }
  __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(__this,(MethodInfo *)0x0);
  if ((((__this != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) &&
      (UnityEngine_Transform__SetParent(__this_00,JJHEGPBBMLG,(MethodInfo *)0x0),
      JJHEGPBBMLG != (UnityEngine_Transform_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)JJHEGPBBMLG,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    value = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
    UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
    pNVar1 = (Nekki_SF2_GUI_Glyphs_ImageGlyph_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this,Method_UnityEngine_GameObject_AddComponent<ImageGlyph>__);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x336EFF0]
// Nekki.SF2.GUI.Glyphs.Glyph$$.ctor @ RVA 0x336EFF0

void Nekki_SF2_GUI_Glyphs_Glyph___ctor(Nekki_SF2_GUI_Glyphs_Glyph_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void FILPFIKBFAO(BOGDEGPCIJI CJNHFNHJHPE)  [RVA 0x336EFF8]
// Nekki.SF2.GUI.Glyphs.Glyph$$FILPFIKBFAO @ RVA 0x336EFF8

void Nekki_SF2_GUI_Glyphs_Glyph__FILPFIKBFAO
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,BOGDEGPCIJI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FAPFIEABBBO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

