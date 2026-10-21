// TypeDefIndex 838
// Namespace: 
// [RequireComponent(typeof(SpriteRenderer))]
// public class PrefabSpriteLowQualityChecker : MonoBehaviour
// Fields:
//   private const string NKJCHKKBNKH = "Textures/Locations";
//   private const string FCMLFOGJOOH = "Textures/Location_effects";
//   private SpriteRenderer _sr; // 0x20
//   private string _atlasPath; // 0x28

// ===== private void Awake()  [RVA 0x3081F38]
// PrefabSpriteLowQualityChecker$$Awake @ RVA 0x3081F38

void PrefabSpriteLowQualityChecker__Awake
               (PrefabSpriteLowQualityChecker_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_Texture2D_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar8;
  float fVar9;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  float fVar10;
  float fVar11;
  
  if ((DAT_04566000 & 1) == 0) {
    FUN_01bab630(&MainSettings_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12916/*"Textures/Location_effects"*/);
    FUN_01bab630(&StringLiteral_12919/*"Textures/Locations"*/);
    DAT_04566000 = 1;
  }
  pUVar2 = (__this->fields)._sr;
  if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)
             UnityEngine_SpriteRenderer__get_sprite(pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields)._atlasPath,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pSVar4 = (__this->fields)._atlasPath;
    if (pSVar4 == (System_String_o *)0x0) goto LAB_0318243c;
    bVar1 = System_String__StartsWith(pSVar4,StringLiteral_12919/*"Textures/Locations"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar4 = (__this->fields)._atlasPath;
      if (pSVar4 == (System_String_o *)0x0) goto LAB_0318243c;
      bVar1 = System_String__StartsWith(pSVar4,StringLiteral_12916/*"Textures/Location_effects"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565ff0 == '\0') {
          FUN_01bab630(&MainSettings_TypeInfo);
          DAT_04565ff0 = '\x01';
        }
        if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                          (MainSettings_TypeInfo->static_fields->HABNBDAMLMP,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        if ((pUVar3 == (UnityEngine_Object_o *)0x0) ||
           (pUVar5 = UnityEngine_Sprite__get_texture
                               ((UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0),
           pUVar5 == (UnityEngine_Texture2D_o *)0x0)) goto LAB_0318243c;
        pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
        if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
        }
        bVar1 = KKCBGIBKOCP__INHBAMFOLNC(pSVar4,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        pSVar8 = (__this->fields)._atlasPath;
        pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Texture2D_o *)0x0) goto LAB_0318243c;
        pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
        }
        pUVar3 = (UnityEngine_Object_o *)
                 NGCBNMBJMOE__NECCNHODCAE(pSVar8,pSVar4,pSVar6,true,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        pUVar2 = (__this->fields)._sr;
        if (pUVar2 == (UnityEngine_SpriteRenderer_o *)0x0) goto LAB_0318243c;
        UnityEngine_SpriteRenderer__set_sprite
                  (pUVar2,(UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._sr;
        if (((pUVar2 == (UnityEngine_SpriteRenderer_o *)0x0) ||
            (pUVar7 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
            pUVar7 == (UnityEngine_GameObject_o *)0x0)) ||
           (__this_00 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0318243c;
        UVar13 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
        fVar11 = UVar13.fields.z;
        fVar10 = UVar13.fields.y;
        fVar9 = UVar13.fields.x;
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
        fVar12 = MainSettings_TypeInfo->static_fields->CHCLEFKLOKH;
        goto LAB_0318240c;
      }
    }
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565fef == '\0') {
      FUN_01bab630(&MainSettings_TypeInfo);
      DAT_04565fef = '\x01';
    }
    if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                      (MainSettings_TypeInfo->static_fields->BDFFMDCAHGJ,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((pUVar3 != (UnityEngine_Object_o *)0x0) &&
       (pUVar5 = UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Texture2D_o *)0x0)) {
      pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
      if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
      }
      bVar1 = KKCBGIBKOCP__INHBAMFOLNC(pSVar4,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pSVar8 = (__this->fields)._atlasPath;
      pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
      pUVar5 = UnityEngine_Sprite__get_texture((UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Texture2D_o *)0x0) {
        pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
        if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
        }
        pUVar3 = (UnityEngine_Object_o *)
                 NGCBNMBJMOE__NECCNHODCAE(pSVar8,pSVar4,pSVar6,true,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
        pUVar2 = (__this->fields)._sr;
        if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
          UnityEngine_SpriteRenderer__set_sprite
                    (pUVar2,(UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._sr;
          if (((pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) &&
              (pUVar7 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
              pUVar7 != (UnityEngine_GameObject_o *)0x0)) &&
             (__this_00 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
             __this_00 != (UnityEngine_Transform_o *)0x0)) {
            UVar13 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
            fVar11 = UVar13.fields.z;
            fVar10 = UVar13.fields.y;
            fVar9 = UVar13.fields.x;
            if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_045660f4 == '\0') {
              FUN_01bab630(&MainSettings_TypeInfo);
              DAT_045660f4 = '\x01';
            }
            if ((MainSettings_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar12 = MainSettings_TypeInfo->static_fields->NADOFNLEECE;
LAB_0318240c:
            UVar13.fields.x = fVar9 * fVar12;
            UVar13.fields.y = fVar10 * fVar12;
            UVar13.fields.z = fVar11 * fVar12;
            UnityEngine_Transform__set_localScale(__this_00,UVar13,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0318243c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3082440]
// PrefabSpriteLowQualityChecker$$.ctor @ RVA 0x3082440

void PrefabSpriteLowQualityChecker___ctor
               (PrefabSpriteLowQualityChecker_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

