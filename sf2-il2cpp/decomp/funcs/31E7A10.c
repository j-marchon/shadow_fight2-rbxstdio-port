// MNLIBPAOCLG$$KCHJHDCDKGB @ RVA 0x31E7A10

void MNLIBPAOCLG__KCHJHDCDKGB
               (MNLIBPAOCLG_o *__this,UnityEngine_Color_o EFJKPCADGJH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Sprite_o *value;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *parent;
  MethodInfo *extraout_x1;
  NHBBOEHHEKG_o *pNVar4;
  MEHKKHFBNLM_o *pMVar5;
  UnityEngine_SpriteRenderer_o **ppUVar6;
  UnityEngine_SpriteRenderer_o *pUVar7;
  UnityEngine_Texture2D_o *pUVar8;
  UnityEngine_Color_o value_00;
  UnityEngine_Vector3_o value_01;
  
  if ((DAT_04566d71 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&MNLIBPAOCLG_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Texture2D_TypeInfo);
    FUN_01bab630(&StringLiteral_5103);
    DAT_04566d71 = 1;
    method = extraout_x1;
  }
  ppUVar6 = &(__this->fields).JNBHKOBOIMD;
  pUVar7 = *ppUVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
    if (pUVar8 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixel(pUVar8,0,0,EFJKPCADGJH,(MethodInfo *)0x0);
      pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
      if (pUVar8 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(pUVar8,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_032e7d44;
  }
  pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar8 = (UnityEngine_Texture2D_o *)thunk_FUN_01bda818(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor(pUVar8,1,1,(MethodInfo *)0x0);
    MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA = pUVar8;
    thunk_FUN_01c20e04(MNLIBPAOCLG_TypeInfo->static_fields,pUVar8);
    pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
    if (pUVar8 == (UnityEngine_Texture2D_o *)0x0) goto LAB_032e7d44;
    UnityEngine_Texture2D__SetPixel(pUVar8,0,0,EFJKPCADGJH,(MethodInfo *)0x0);
    pUVar8 = MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA;
    if (pUVar8 == (UnityEngine_Texture2D_o *)0x0) goto LAB_032e7d44;
    UnityEngine_Texture2D__Apply(pUVar8,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(pUVar2,StringLiteral_5103,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_SpriteRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (pUVar2,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    *ppUVar6 = pUVar7;
    thunk_FUN_01c20e04(ppUVar6,pUVar7);
    pUVar7 = *ppUVar6;
    value = UnityEngine_Sprite__Create
                      (MNLIBPAOCLG_TypeInfo->static_fields->OEPIDHMGLGA,
                       (UnityEngine_Rect_o)(ZEXT816(0x3f8000003f800000) << 0x40),
                       (UnityEngine_Vector2_o)0x3f0000003f000000,1.0,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
      UnityEngine_SpriteRenderer__set_sprite(pUVar7,value,(MethodInfo *)0x0);
      if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
        value_00.fields.b = 1.0;
        value_00.fields.r = 1.0;
        value_00.fields.g = 1.0;
        value_00.fields.a = 0.0;
        UnityEngine_SpriteRenderer__set_color(*ppUVar6,value_00,(MethodInfo *)0x0);
        if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
          pNVar4 = (__this->fields).CNHHLPPHNCO;
          if ((pNVar4 != (NHBBOEHHEKG_o *)0x0) && (pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            value_01.fields.y = (pNVar4->fields).DAPHCPICAAC * 3.0;
            value_01.fields.x = (pNVar4->fields).NMFKJBOAOLK * 1.5;
            value_01.fields.z = 0.0;
            UnityEngine_Transform__set_localScale(pUVar3,value_01,(MethodInfo *)0x0);
            if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
              pMVar5 = (__this->fields).DDDKDGIEBFP;
              if (((pMVar5 != (MEHKKHFBNLM_o *)0x0) &&
                  (pUVar2 = (pMVar5->fields)._KDDKJJLDFFO_k__BackingField,
                  pUVar2 != (UnityEngine_GameObject_o *)0x0)) &&
                 (parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar3,parent,false,(MethodInfo *)0x0);
                if (*ppUVar6 != (UnityEngine_SpriteRenderer_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0);
                  Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032e7d44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

