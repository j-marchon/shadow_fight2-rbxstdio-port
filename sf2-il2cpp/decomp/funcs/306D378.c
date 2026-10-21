// GMGALNFPLPA$$CGJEJAPKEHG @ RVA 0x306D378

void GMGALNFPLPA__CGJEJAPKEHG
               (GMGALNFPLPA_o *__this,System_String_o *PBAGOKJDBMA,System_String_o *EGANPPCJHNI,
               System_String_o *JPPLEGNJFMJ,JHHFDBLANPH_MNHKJDJJINH_o *IGMLPNCPHLD,float NMFKJBOAOLK
               ,float DAPHCPICAAC,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  long lVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_SpriteRenderer_o *pUVar7;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  undefined8 uVar9;
  UnityEngine_GameObject_o **ppUVar10;
  UnityEngine_SpriteRenderer_o **ppUVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Rect_o UVar18;
  UnityEngine_Vector2_o UVar19;
  UnityEngine_Vector2_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04565f44 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10268);
    DAT_04565f44 = 1;
  }
  if ((__this->fields).JDNKKGPNHPB != 0) {
    return;
  }
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  x = (UnityEngine_Object_o *)
      NGCBNMBJMOE__NECCNHODCAE(PBAGOKJDBMA,EGANPPCJHNI,JPPLEGNJFMJ,false,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar4) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
      if (args != (System_Object_array *)0x0) {
        if ((PBAGOKJDBMA != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(PBAGOKJDBMA,(((args->obj).klass)->_1).element_class),
           lVar5 == 0)) {
LAB_0316d904:
          uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar9,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)PBAGOKJDBMA;
          thunk_FUN_01c20e04(args->m_Items,PBAGOKJDBMA);
          if ((JPPLEGNJFMJ != (System_String_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(JPPLEGNJFMJ,(((args->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_0316d904;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)JPPLEGNJFMJ;
            thunk_FUN_01c20e04(args->m_Items + 1,JPPLEGNJFMJ);
            if ((EGANPPCJHNI != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(EGANPPCJHNI,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_0316d904;
            if (2 < (uint)args->max_length) {
              args->m_Items[2] = (Il2CppObject *)EGANPPCJHNI;
              thunk_FUN_01c20e04(args->m_Items + 2,EGANPPCJHNI);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_10268,args,(MethodInfo *)0x0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0316d8fc;
    }
  }
  pUVar6 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(pUVar6,EGANPPCJHNI,(MethodInfo *)0x0);
  ppUVar10 = &(__this->fields).OJJAMKDEMJJ;
  *ppUVar10 = pUVar6;
  thunk_FUN_01c20e04(ppUVar10,pUVar6);
  if (*ppUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_SpriteRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (*ppUVar10,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    ppUVar11 = &(__this->fields).ANFEBGMOGJD;
    *ppUVar11 = pUVar7;
    thunk_FUN_01c20e04(ppUVar11,pUVar7);
    pUVar6 = (__this->fields).OJJAMKDEMJJ;
    if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar6 = UnityEngine_GameObject__get_gameObject(pUVar6,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      __this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (pUVar6,Method_UnityEngine_GameObject_AddComponent<RectTransform>__);
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(FGKGKDEJCOG_TypeInfo);
      }
      if (DAT_04565e5d == '\0') {
        FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
        DAT_04565e5d = '\x01';
      }
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      uVar13 = 0;
      if (FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH != 1.0) {
        if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0316d8fc;
        UVar19 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564((ulong)UVar19.fields & 0xffffffff,CONCAT44(uVar13,UVar19.fields.y));
        }
        if (DAT_04565e5d == '\0') {
          FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
          DAT_04565e5d = '\x01';
        }
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar16 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
        UVar20 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        if (DAT_04565e5d == '\0') {
          FUN_01bab630((ulong)UVar20.fields & 0xffffffff,&FGKGKDEJCOG_TypeInfo);
          DAT_04565e5d = '\x01';
        }
        if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UVar19.fields.x = UVar19.fields.x * fVar16;
        UVar19.fields.y = UVar20.fields.y * FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar19,(MethodInfo *)0x0);
      }
      if (*ppUVar11 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_SpriteRenderer__set_sprite
                  (*ppUVar11,(UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
        if ((*ppUVar11 != (UnityEngine_SpriteRenderer_o *)0x0) &&
           (UnityEngine_SpriteRenderer__set_drawMode(*ppUVar11,1,(MethodInfo *)0x0),
           x != (UnityEngine_Object_o *)0x0)) {
          UVar18 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
          fVar16 = UVar18.fields.m_Width;
          UVar18 = UnityEngine_Sprite__get_rect((UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
          fVar15 = UVar18.fields.m_Height;
          (__this->fields).LLIFBKDPNKI = 0.0;
          (__this->fields).PDJHCPAFGNH = 0.0;
          bVar4 = false;
          if (IGMLPNCPHLD != (JHHFDBLANPH_MNHKJDJJINH_o *)0x0) {
            bVar1 = (IGMLPNCPHLD->fields).CDHBEDHABDL;
            (__this->fields).LLIFBKDPNKI = (IGMLPNCPHLD->fields).JJOBECCEMMI.fields.x;
            bVar4 = bVar1 != false;
            fVar14 = fVar15;
            fVar17 = fVar16;
            if (!bVar4) {
              fVar14 = fVar16;
              fVar17 = fVar15;
            }
            (__this->fields).PDJHCPAFGNH = (IGMLPNCPHLD->fields).JJOBECCEMMI.fields.y;
            fVar12 = (IGMLPNCPHLD->fields).NPLFJBBBIBH.fields.x;
            fVar15 = (IGMLPNCPHLD->fields).NPLFJBBBIBH.fields.y;
            fVar16 = fVar14;
            if (fVar14 <= fVar12) {
              fVar16 = fVar12;
            }
            if (fVar15 < fVar17) {
              fVar15 = fVar17;
            }
          }
          if ((*ppUVar10 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
            UVar21 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0);
            if ((*ppUVar10 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
               pUVar8 != (UnityEngine_Transform_o *)0x0)) {
              uVar2 = (__this->fields).LLIFBKDPNKI;
              uVar3 = (__this->fields).PDJHCPAFGNH;
              UVar21.fields.y = (float)uVar3;
              UVar21.fields.x = (float)uVar2;
              UnityEngine_Transform__set_localPosition(pUVar8,UVar21,(MethodInfo *)0x0);
              if (bVar4) {
                if ((*ppUVar10 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
                   pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0316d8fc;
                UnityEngine_Transform__Rotate(pUVar8,0.0,0.0,90.0,(MethodInfo *)0x0);
                fVar17 = DAPHCPICAAC / fVar15;
                fVar16 = NMFKJBOAOLK / fVar16;
              }
              else {
                fVar17 = NMFKJBOAOLK / fVar16;
                fVar16 = DAPHCPICAAC / fVar15;
              }
              if ((*ppUVar10 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar8 = UnityEngine_GameObject__get_transform(*ppUVar10,(MethodInfo *)0x0),
                 pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                value.fields.y = fVar16;
                value.fields.x = fVar17;
                value.fields.z = 1.0;
                UnityEngine_Transform__set_localScale(pUVar8,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0316d8fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

