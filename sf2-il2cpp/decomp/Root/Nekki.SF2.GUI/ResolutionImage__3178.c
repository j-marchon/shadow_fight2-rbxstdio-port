// TypeDefIndex 3178
// Namespace: Nekki.SF2.GUI
// [AddComponentMenu("UI_Nekki/ResolutionImage")]
// public class ResolutionImage : Image
// Fields:
//   private string _TexturePath; // 0x110
//   private string _SpriteName; // 0x118
//   public bool UseCacheForSingleSprites; // 0x120
//   protected bool DABOBLMNMLD; // 0x121

// ===== public virtual void SetNativeSize(float DCIDOOPHJDG)  [RVA 0x34E4938]
// Nekki.SF2.GUI.ResolutionImage$$SetNativeSize @ RVA 0x34E4938

void Nekki_SF2_GUI_ResolutionImage__SetNativeSize
               (Nekki_SF2_GUI_ResolutionImage_o *__this,float DCIDOOPHJDG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_array *x;
  float fVar3;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  float fVar4;
  
  if ((DAT_04568751 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568751 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).super.super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 035e499c to 036e49a3 has its CatchHandler @ 035e49ec */
  if (bVar1) {
                    /* try { // try from 035e49b0 to 036e49bb has its CatchHandler @ 035e49e8 */
    return;
  }
                    /* try { // try from 035e49bc to 036e49db has its CatchHandler @ 035e4908 */
  UnityEngine_UI_Image__SetNativeSize((UnityEngine_UI_Image_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                     ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar6.fields.y;
    fVar3 = UVar6.fields.x;
                    /* try { // try from 035e49dc to 036e49df has its CatchHandler @ 035e49e4 */
                    /* try { // try from 035e49e0 to 036e4a03 has its CatchHandler @ 035e4908 */
    fVar5 = fVar3;
    if (fVar3 <= fVar4) {
      fVar5 = fVar4;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e49dc with catch @ 035e49e4
                        */
    fVar5 = DCIDOOPHJDG / fVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e49b0 with catch @ 035e49e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e499c with catch @ 035e49ec
                        */
    if (fVar5 < 1.0) {
      pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 035e4a04 to 036e4a07 has its CatchHandler @ 035e4a30 */
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_035e4a3c;
                    /* try { // try from 035e4a08 to 036e4a3f has its CatchHandler @ 035e4908 */
      UVar6.fields.y = fVar4 * fVar5;
      UVar6.fields.x = fVar3 * fVar5;
      UnityEngine_RectTransform__set_sizeDelta(pUVar2,UVar6,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 035e4a04 with catch @ 035e4a30 */
                    /* WARNING: Could not recover jumptable at 0x035e4a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._90_GPCBFKCHEOB.methodPtr)
              (__this,(__this->klass->vtable)._90_GPCBFKCHEOB.method);
    return;
  }
LAB_035e4a3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_TexturePath()  [RVA 0x34E4A40]
// Nekki.SF2.GUI.ResolutionImage$$get_TexturePath @ RVA 0x34E4A40

System_String_o *
Nekki_SF2_GUI_ResolutionImage__get_TexturePath
          (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
                    /* try { // try from 035e4a40 to 036e4a47 has its CatchHandler @ 035e4a5c */
  return *(System_String_o **)&(__this->fields).super.m_PixelsPerUnitMultiplier;
}


// ===== protected virtual void GPCBFKCHEOB()  [RVA 0x34E4A48]
// Nekki.SF2.GUI.ResolutionImage$$GPCBFKCHEOB @ RVA 0x34E4A48

void Nekki_SF2_GUI_ResolutionImage__GPCBFKCHEOB
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *HCAAAAMDCNO;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_array *pUVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  UnityEngine_Vector2_o value;
  
                    /* try { // try from 035e4a48 to 036e4a53 has its CatchHandler @ 035e4908 */
                    /* try { // try from 035e4a54 to 036e4a5b has its CatchHandler @ 035e4a5c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e4a40 with catch @ 035e4a5c
                       catch(type#2 @ 00000000) { ... } // from try @ 035e4a54 with catch @ 035e4a5c
                        */
  if ((DAT_04568752 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568752 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).super.super.m_Corners;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565e5d == '\0') {
      FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
      DAT_04565e5d = '\x01';
    }
    if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Util__JFJCDAJGFKD(FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH,1.0,0.001,
                              (MethodInfo *)0x0);
    if (!bVar1) {
      pUVar2 = (__this->fields).super.super.m_Corners;
      if ((pUVar2 != (UnityEngine_Vector3_array *)0x0) &&
         (__this_00 = UnityEngine_Sprite__get_texture
                                ((UnityEngine_Sprite_o *)pUVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Texture2D_o *)0x0)) {
        HCAAAAMDCNO = UnityEngine_Object__get_name
                                ((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
        if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
        }
        bVar1 = KKCBGIBKOCP__INHBAMFOLNC(HCAAAAMDCNO,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        __this_01 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565e5d == '\0') {
            FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
            DAT_04565e5d = '\x01';
          }
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar3 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
          value.fields.x = UVar4.fields.x * fVar3;
          value.fields.y = UVar4.fields.y * fVar3;
          UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public override void SetNativeSize()  [RVA 0x34E4C24]
// Nekki.SF2.GUI.ResolutionImage$$SetNativeSize @ RVA 0x34E4C24

void Nekki_SF2_GUI_ResolutionImage__SetNativeSize
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image__SetNativeSize((UnityEngine_UI_Image_o *)__this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035e4c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._90_GPCBFKCHEOB.methodPtr)
            (__this,(__this->klass->vtable)._90_GPCBFKCHEOB.method);
  return;
}


// ===== public string get_SpriteName()  [RVA 0x34E4C4C]
// Nekki.SF2.GUI.ResolutionImage$$get_SpriteName @ RVA 0x34E4C4C

System_String_o *
Nekki_SF2_GUI_ResolutionImage__get_SpriteName
          (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  return (__this->fields)._TexturePath;
}


// ===== public void .ctor()  [RVA 0x34E4C54]
// Nekki.SF2.GUI.ResolutionImage$$.ctor @ RVA 0x34E4C54

void Nekki_SF2_GUI_ResolutionImage___ctor
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568753 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Image_TypeInfo);
    DAT_04568753 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_UI_Image_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_Image_TypeInfo,method);
  }
  UnityEngine_UI_Image___ctor((UnityEngine_UI_Image_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void set_SpriteName(string CJNHFNHJHPE)  [RVA 0x34DC150]
// Nekki.SF2.GUI.ResolutionImage$$set_SpriteName @ RVA 0x34DC150

void Nekki_SF2_GUI_ResolutionImage__set_SpriteName
               (Nekki_SF2_GUI_ResolutionImage_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._TexturePath = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields)._TexturePath);
                    /* WARNING: Could not recover jumptable at 0x035dc178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._91_RefreshSprite.methodPtr)
            (__this,(__this->klass->vtable)._91_RefreshSprite.method);
  return;
}


// ===== protected override void Awake()  [RVA 0x34E4CAC]
// Nekki.SF2.GUI.ResolutionImage$$Awake @ RVA 0x34E4CAC

void Nekki_SF2_GUI_ResolutionImage__Awake
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035e4cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._91_RefreshSprite.methodPtr)
            (__this,(__this->klass->vtable)._91_RefreshSprite.method);
  return;
}


// ===== public bool TryImageWithPaths(string HCAAAAMDCNO, IEnumerable<string> KGCGJCOHIIB)  [RVA 0x34E4CD4]
// Nekki.SF2.GUI.ResolutionImage$$TryImageWithPaths @ RVA 0x34E4CD4

/* WARNING: Removing unreachable block (ram,0x035e4f90) */

bool Nekki_SF2_GUI_ResolutionImage__TryImageWithPaths
               (Nekki_SF2_GUI_ResolutionImage_o *__this,System_String_o *HCAAAAMDCNO,
               System_Collections_Generic_IEnumerable_string__o *KGCGJCOHIIB,MethodInfo *method)

{
  float *pfVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_IEnumerable_string__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  UnityEngine_Vector3_array *x;
  
  if ((DAT_04568754 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568754 = 1;
  }
                    /* try { // try from 035e4d4c to 036e4dd7 has its CatchHandler @ 035e4d4c
                       catch() { ... } // from try @ 035e4d4c with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4df4 with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4e18 with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4e40 with catch @ 035e4d4c
                       catch() { ... } // from try @ 035e4e80 with catch @ 035e4d4c */
  (__this->fields)._TexturePath = HCAAAAMDCNO;
  thunk_FUN_01c20e04(&(__this->fields)._TexturePath,HCAAAAMDCNO);
  if (KGCGJCOHIIB == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = KGCGJCOHIIB->klass;
  uVar2._0_1_ = (pSVar8->_2).rank;
  uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar10 = (ulong)uVar2;
  if (uVar10 != 0) {
    piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
        pVVar5 = pSVar8->vtable + *piVar11;
        goto LAB_035e4dac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar5 = (VirtualInvokeData *)
           FUN_01b81914(KGCGJCOHIIB,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_035e4dac:
  plVar6 = (long *)(*pVVar5->methodPtr)(KGCGJCOHIIB,pVVar5->method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035e4dd8 to 036e4ddf has its CatchHandler @ 035e4e24 */
  pfVar1 = &(__this->fields).super.m_PixelsPerUnitMultiplier;
  do {
    do {
      lVar9 = *plVar6;
                    /* try { // try from 035e4dec to 036e4df3 has its CatchHandler @ 035e4e20 */
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
                    /* try { // try from 035e4df4 to 036e4e13 has its CatchHandler @ 035e4d4c */
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e4dd8 with catch @ 035e4e24
                        */
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_035e4e30;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 035e4e14 to 036e4e17 has its CatchHandler @ 035e4e1c */
                    /* try { // try from 035e4e18 to 036e4e3b has its CatchHandler @ 035e4d4c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e4e14 with catch @ 035e4e1c
                        */
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e4dec with catch @ 035e4e20
                        */
LAB_035e4e30:
      bVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* try { // try from 035e4e3c to 036e4e3f has its CatchHandler @ 035e4e68 */
                    /* try { // try from 035e4e40 to 036e4e77 has its CatchHandler @ 035e4d4c */
      if ((bVar3 & 1) == 0) {
        bVar3 = 0;
        goto joined_r0x035e4f0c;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar12 + -2) ==
              System_Collections_Generic_IEnumerator<string>_TypeInfo) {
                    /* try { // try from 035e4e8c to 036e4e93 has its CatchHandler @ 035e4e94 */
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_035e4e90;
          }
                    /* catch() { ... } // from try @ 035e4e3c with catch @ 035e4e68 */
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
                    /* try { // try from 035e4e78 to 036e4e7f has its CatchHandler @ 035e4e94 */
      puVar7 = (undefined8 *)
               FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
                    /* try { // try from 035e4e80 to 036e4e8b has its CatchHandler @ 035e4d4c */
LAB_035e4e90:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e4e78 with catch @ 035e4e94
                       catch(type#2 @ 00000000) { ... } // from try @ 035e4e8c with catch @ 035e4e94
                        */
      CJNHFNHJHPE = (System_String_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    } while (bVar4);
    *(System_String_o **)pfVar1 = CJNHFNHJHPE;
    thunk_FUN_01c20e04(pfVar1,CJNHFNHJHPE);
    (*(__this->klass->vtable)._91_RefreshSprite.methodPtr)
              (__this,(__this->klass->vtable)._91_RefreshSprite.method);
    x = (__this->fields).super.super.m_Corners;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  } while (!bVar4);
joined_r0x035e4f0c:
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_035e4f5c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_035e4f5c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return (bool)(bVar3 & 1);
}


// ===== public void set_Alpha(float CJNHFNHJHPE)  [RVA 0x34E5050]
// Nekki.SF2.GUI.ResolutionImage$$set_Alpha @ RVA 0x34E5050

void Nekki_SF2_GUI_ResolutionImage__set_Alpha
               (Nekki_SF2_GUI_ResolutionImage_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (*(__this->klass->vtable)._22_get_color.methodPtr)
            (__this,(__this->klass->vtable)._22_get_color.method);
                    /* WARNING: Could not recover jumptable at 0x035e508c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (__this,(__this->klass->vtable)._23_set_color.method);
  return;
}


// ===== public float get_Alpha()  [RVA 0x34E5090]
// Nekki.SF2.GUI.ResolutionImage$$get_Alpha @ RVA 0x34E5090

float Nekki_SF2_GUI_ResolutionImage__get_Alpha
                (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  float in_s3;
  
  (*(__this->klass->vtable)._22_get_color.methodPtr)
            (__this,(__this->klass->vtable)._22_get_color.method);
  return in_s3;
}


// ===== public virtual void RefreshSprite()  [RVA 0x34E50B0]
// Nekki.SF2.GUI.ResolutionImage$$RefreshSprite @ RVA 0x34E50B0

void Nekki_SF2_GUI_ResolutionImage__RefreshSprite
               (Nekki_SF2_GUI_ResolutionImage_o *__this,MethodInfo *method)

{
  System_String_o *OOKEKJMFKPE;
  System_String_o *HCAAAAMDCNO;
  char cVar1;
  UnityEngine_Sprite_o *value;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568755 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04568755 = 1;
    method = extraout_x1;
  }
  *(undefined1 *)((long)&(__this->fields)._SpriteName + 1) = 1;
  OOKEKJMFKPE = *(System_String_o **)&(__this->fields).super.m_PixelsPerUnitMultiplier;
  HCAAAAMDCNO = (__this->fields)._TexturePath;
  cVar1 = *(char *)&(__this->fields)._SpriteName;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo,method);
  }
  value = KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,HCAAAAMDCNO,cVar1 != '\0',(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)__this,value,(MethodInfo *)0x0);
  return;
}


// ===== public void set_TexturePath(string CJNHFNHJHPE)  [RVA 0x34E513C]
// Nekki.SF2.GUI.ResolutionImage$$set_TexturePath @ RVA 0x34E513C

void Nekki_SF2_GUI_ResolutionImage__set_TexturePath
               (Nekki_SF2_GUI_ResolutionImage_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  *(System_String_o **)&(__this->fields).super.m_PixelsPerUnitMultiplier = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).super.m_PixelsPerUnitMultiplier);
  return;
}

