// TypeDefIndex 548
// Namespace: 
// private class TextDebugger.PMOEINNJDPK
// Fields:
//   public Bounds DMFBEEPHANB; // 0x10
//   public float GNCALAHEPCG; // 0x28
//   public Color BANIDGFENDE; // 0x2C

// ===== public void .ctor(Bounds ENGIOBJKJPM, float BMIPOAFLAPO, Color EFJKPCADGJH, float CJJFPABAAFB)  [RVA 0x35A6540]
// Nekki.SF2.GUI.TextDebugger.PMOEINNJDPK$$.ctor @ RVA 0x35A6540

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor
               (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               float BMIPOAFLAPO,UnityEngine_Color_o EFJKPCADGJH,float CJJFPABAAFB,
               MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GNCALAHEPCG = BMIPOAFLAPO;
  (__this->fields).BANIDGFENDE.fields.r = EFJKPCADGJH.fields.r;
  (__this->fields).BANIDGFENDE.fields.g = EFJKPCADGJH.fields.g;
  (__this->fields).BANIDGFENDE.fields.b = EFJKPCADGJH.fields.b;
  (__this->fields).BANIDGFENDE.fields.a = EFJKPCADGJH.fields.a;
  fVar6 = (ENGIOBJKJPM->fields).m_Center.fields.x;
  fVar7 = (ENGIOBJKJPM->fields).m_Center.fields.y;
  fVar2 = (ENGIOBJKJPM->fields).m_Extents.fields.y;
  fVar3 = (ENGIOBJKJPM->fields).m_Extents.fields.z;
  *(undefined8 *)&(__this->fields).DMFBEEPHANB.fields.m_Center.fields.z =
       *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Center.fields.x = fVar6;
  (pUVar1->fields).m_Center.fields.y = fVar7;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  uVar4 = (pUVar1->fields).m_Center.fields.x;
  uVar5 = (pUVar1->fields).m_Center.fields.y;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Extents.fields.y = fVar2;
  (pUVar1->fields).m_Extents.fields.z = fVar3;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  uVar8 = (pUVar1->fields).m_Extents.fields.x;
  uVar9 = (pUVar1->fields).m_Extents.fields.y;
  fVar7 = (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z;
  fVar6 = (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Center.fields.x = (float)uVar4 + 0.0;
  (pUVar1->fields).m_Center.fields.y = (float)uVar5 + 0.0;
  (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z = fVar7 + CJJFPABAAFB;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Extents.fields.x = ((float)uVar8 + (float)uVar8) * 0.5;
  (pUVar1->fields).m_Extents.fields.y = ((float)uVar9 + (float)uVar9) * 0.5;
  (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z = (fVar6 + fVar6) * 0.5;
  return;
}


// ===== public void .ctor(List<IHIFNKAMALG> KIOJIHNIIDE, int OGPGLGPMEPD, float BMIPOAFLAPO, Color EFJKPCADGJH, float CJJFPABAAFB)  [RVA 0x35A6A74]
// Nekki.SF2.GUI.TextDebugger.PMOEINNJDPK$$.ctor @ RVA 0x35A6A74

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor
               (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this,
               System_Collections_Generic_List_IHIFNKAMALG__o *KIOJIHNIIDE,int32_t OGPGLGPMEPD,
               float BMIPOAFLAPO,UnityEngine_Color_o EFJKPCADGJH,float CJJFPABAAFB,
               MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar9;
  undefined8 uVar6;
  ulong uVar7;
  UnityEngine_Vector2_Fields UVar8;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar16;
  ulong uVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  Il2CppClass *pIVar20;
  float fVar21;
  
  if ((DAT_04568e29 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04568e29 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GNCALAHEPCG = BMIPOAFLAPO;
  (__this->fields).BANIDGFENDE.fields.r = EFJKPCADGJH.fields.r;
  (__this->fields).BANIDGFENDE.fields.g = EFJKPCADGJH.fields.g;
  (__this->fields).BANIDGFENDE.fields.b = EFJKPCADGJH.fields.b;
  (__this->fields).BANIDGFENDE.fields.a = EFJKPCADGJH.fields.a;
  if ((KIOJIHNIIDE != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
     (pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)KIOJIHNIIDE,OGPGLGPMEPD,
                          Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
     pIVar2 != (Il2CppObject *)0x0)) {
    pIVar20 = pIVar2[1].klass;
    fVar21 = *(float *)&pIVar2[1].monitor;
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar5 = (pUVar3->zeroVector).fields.x;
    uVar9 = (pUVar3->zeroVector).fields.y;
    fVar10 = (pUVar3->zeroVector).fields.z;
    *(Il2CppClass **)&(__this->fields).DMFBEEPHANB.fields.m_Center.fields = pIVar20;
    (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z = fVar21;
    uVar6 = CONCAT44((float)uVar9 * 0.5,(float)uVar5 * 0.5);
    pUVar1 = &(__this->fields).DMFBEEPHANB;
    (pUVar1->fields).m_Extents.fields.x = (float)uVar5 * 0.5;
    (pUVar1->fields).m_Extents.fields.y = (float)uVar9 * 0.5;
    (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z = fVar10 * 0.5;
    if (OGPGLGPMEPD + 1 < OGPGLGPMEPD + 4) {
      iVar4 = 1;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)KIOJIHNIIDE,
                            OGPGLGPMEPD + iVar4,
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_036a6ca8;
        pUVar1 = &(__this->fields).DMFBEEPHANB;
        uVar11 = (pUVar1->fields).m_Center.fields.x;
        uVar12 = (pUVar1->fields).m_Center.fields.y;
        fVar10 = (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z;
        pUVar1 = &(__this->fields).DMFBEEPHANB;
        uVar13 = (pUVar1->fields).m_Extents.fields.x;
        uVar16 = (pUVar1->fields).m_Extents.fields.y;
        fVar18 = (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z;
        pIVar20 = pIVar2[1].klass;
        fVar19 = *(float *)&pIVar2[1].monitor;
        fVar21 = fVar10 - fVar18;
        fVar10 = fVar10 + fVar18;
        fVar18 = (float)((ulong)pIVar20 >> 0x20);
        uVar15 = (ulong)pIVar20 ^
                 ((ulong)pIVar20 ^
                 CONCAT44((float)uVar12 - (float)uVar16,(float)uVar11 - (float)uVar13)) &
                 CONCAT44(-(uint)((float)uVar12 - (float)uVar16 < fVar18),
                          -(uint)((float)uVar11 - (float)uVar13 < SUB84(pIVar20,0)));
        if (fVar19 <= fVar21) {
          fVar21 = fVar19;
        }
        uVar7 = (ulong)pIVar20 ^
                ((ulong)pIVar20 ^
                CONCAT44((float)uVar12 + (float)uVar16,(float)uVar11 + (float)uVar13)) &
                CONCAT44(-(uint)(fVar18 < (float)uVar12 + (float)uVar16),
                         -(uint)(SUB84(pIVar20,0) < (float)uVar11 + (float)uVar13));
        if (fVar10 <= fVar19) {
          fVar10 = fVar19;
        }
        fVar14 = (float)uVar15;
        fVar17 = (float)(uVar15 >> 0x20);
        iVar4 = iVar4 + 1;
        fVar18 = ((float)uVar7 - fVar14) * 0.5;
        fVar19 = ((float)(uVar7 >> 0x20) - fVar17) * 0.5;
        uVar6 = CONCAT44(fVar19,fVar18);
        fVar10 = (fVar10 - fVar21) * 0.5;
        pIVar20 = (Il2CppClass *)CONCAT44(fVar17 + fVar19,fVar14 + fVar18);
        fVar21 = fVar21 + fVar10;
        pUVar1 = &(__this->fields).DMFBEEPHANB;
        (pUVar1->fields).m_Extents.fields.x = fVar18;
        (pUVar1->fields).m_Extents.fields.y = fVar19;
        (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z = fVar10;
        *(Il2CppClass **)&(__this->fields).DMFBEEPHANB.fields.m_Center.fields = pIVar20;
        (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z = fVar21;
      } while (iVar4 != 4);
    }
    fVar18 = (float)((ulong)uVar6 >> 0x20);
    fVar10 = (float)uVar6 + (float)uVar6;
    fVar18 = fVar18 + fVar18;
    if (fVar10 * fVar10 + fVar18 * fVar18 <= 0.1) {
      if (DAT_0455fa7e == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa7e = '\x01';
        pIVar20 = *(Il2CppClass **)&(__this->fields).DMFBEEPHANB.fields.m_Center.fields;
        fVar21 = (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z;
      }
      UVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields;
      fVar10 = UVar8.x;
      fVar18 = UVar8.y;
      fVar10 = fVar10 + fVar10;
      fVar18 = fVar18 + fVar18;
    }
    (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z = fVar21 + CJJFPABAAFB;
    pUVar1 = &(__this->fields).DMFBEEPHANB;
    (pUVar1->fields).m_Center.fields.x = SUB84(pIVar20,0) + 0.0;
    (pUVar1->fields).m_Center.fields.y = (float)((ulong)pIVar20 >> 0x20) + 0.0;
    pUVar1 = &(__this->fields).DMFBEEPHANB;
    (pUVar1->fields).m_Extents.fields.x = fVar10 * 0.5;
    (pUVar1->fields).m_Extents.fields.y = fVar18 * 0.5;
    (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z = 0.0;
    return;
  }
LAB_036a6ca8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

