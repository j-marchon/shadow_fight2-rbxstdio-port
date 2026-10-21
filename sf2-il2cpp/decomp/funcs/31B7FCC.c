// ClanLogoImage$$BNLMMGGEPAN @ RVA 0x31B7FCC

void ClanLogoImage__BNLMMGGEPAN(ClanLogoImage_o *__this,int32_t OHLDDIANEPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_String_array *pSVar6;
  Il2CppMethodPointer pIVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  int32_t local_24;
  
                    /* try { // try from 032b7fe4 to 033b7ff3 has its CatchHandler @ 032b8068 */
  local_24 = OHLDDIANEPE;
  if ((DAT_04566bc5 & 1) == 0) {
                    /* try { // try from 032b7ff4 to 033b801b has its CatchHandler @ 032b7d28 */
    FUN_01bab630(&Method_System_Nullable<Color>_get_Value__);
    FUN_01bab630(&StringLiteral_4390);
    FUN_01bab630(&StringLiteral_4391);
    DAT_04566bc5 = 1;
  }
                    /* try { // try from 032b801c to 033b801f has its CatchHandler @ 032b808c */
                    /* try { // try from 032b8024 to 033b8027 has its CatchHandler @ 032b8088 */
  if ((OHLDDIANEPE < 1) || ((__this->fields).HACKNLKPIPL == (System_String_array *)0x0)) {
    pNVar1 = (__this->fields)._layerLevelBottom;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._layerLevelTop;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b80a0 with catch @ 032b8104 */
        pNVar3 = (__this->fields)._levelLabel;
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 032b8114 to 033b811b has its CatchHandler @ 032b8130 */
                    /* try { // try from 032b811c to 033b8127 has its CatchHandler @ 032b7d28 */
          Util__IHPDCBOFHPA(pUVar2,false,(MethodInfo *)0x0);
LAB_032b81dc:
          (__this->fields).GPCPMFCFAMG = OHLDDIANEPE;
          return;
        }
      }
    }
  }
  else {
                    /* try { // try from 032b802c to 033b802f has its CatchHandler @ 032b8084 */
    pNVar1 = (__this->fields)._layerLevelBottom;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b8034 to 033b8037 has its CatchHandler @ 032b8080 */
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 032b803c to 033b803f has its CatchHandler @ 032b8074 */
                    /* try { // try from 032b8044 to 033b8047 has its CatchHandler @ 032b8064 */
      Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._layerLevelTop;
                    /* try { // try from 032b804c to 033b804f has its CatchHandler @ 032b8060 */
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* try { // try from 032b8054 to 033b8057 has its CatchHandler @ 032b805c */
        pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 032b8058 to 033b809f has its CatchHandler @ 032b7d28 */
                    /* catch() { ... } // from try @ 032b8054 with catch @ 032b805c */
                    /* catch() { ... } // from try @ 032b804c with catch @ 032b8060 */
        Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b8044 with catch @ 032b8064 */
        pNVar3 = (__this->fields)._levelLabel;
                    /* catch() { ... } // from try @ 032b7fe4 with catch @ 032b8068 */
        if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* catch() { ... } // from try @ 032b7efc with catch @ 032b806c */
                    /* catch() { ... } // from try @ 032b7eb8 with catch @ 032b8070 */
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b803c with catch @ 032b8074 */
                    /* catch() { ... } // from try @ 032b7ee8 with catch @ 032b8078 */
                    /* catch() { ... } // from try @ 032b7e94 with catch @ 032b807c */
          Util__IHPDCBOFHPA(pUVar2,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032b8034 with catch @ 032b8080 */
                    /* catch() { ... } // from try @ 032b802c with catch @ 032b8084 */
                    /* catch() { ... } // from try @ 032b8024 with catch @ 032b8088 */
          if ((__this->fields).GPCPMFCFAMG == OHLDDIANEPE) goto LAB_032b81dc;
                    /* catch() { ... } // from try @ 032b801c with catch @ 032b808c */
          pSVar6 = (__this->fields).HACKNLKPIPL;
                    /* catch() { ... } // from try @ 032b7e5c with catch @ 032b8090 */
          if (pSVar6 != (System_String_array *)0x0) {
            pNVar1 = (__this->fields)._layerLevelBottom;
                    /* try { // try from 032b80a0 to 033b80a3 has its CatchHandler @ 032b8104 */
            if ((int)pSVar6->max_length < 3) {
                    /* try { // try from 032b80a4 to 033b8113 has its CatchHandler @ 032b7d28 */
              UVar12 = System_Nullable<Color>__get_Value
                                 (&(__this->fields).OPPFHPEPLOO,
                                  Method_System_Nullable<Color>_get_Value__);
              fVar11 = UVar12.fields.a;
              fVar10 = UVar12.fields.b;
              fVar9 = UVar12.fields.g;
              fVar8 = UVar12.fields.r;
              if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032b81f0;
              pIVar7 = (pNVar1->klass->vtable)._23_set_color.methodPtr;
              pMVar5 = (pNVar1->klass->vtable)._23_set_color.method;
            }
            else {
              if (pNVar1 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032b81f0;
                    /* try { // try from 032b8128 to 033b812f has its CatchHandler @ 032b8130 */
              fVar8 = 0.0;
                    /* catch() { ... } // from try @ 032b8114 with catch @ 032b8130
                       catch() { ... } // from try @ 032b8128 with catch @ 032b8130 */
              fVar9 = 0.0;
              fVar10 = 0.0;
              pIVar7 = (pNVar1->klass->vtable)._23_set_color.methodPtr;
              pMVar5 = (pNVar1->klass->vtable)._23_set_color.method;
              fVar11 = 1.0;
            }
            (*pIVar7)(fVar8,fVar9,fVar10,fVar11,pNVar1,pMVar5);
            pNVar1 = (__this->fields)._layerLevelBottom;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                        (pNVar1,StringLiteral_4391,(MethodInfo *)0x0);
              pNVar1 = (__this->fields)._layerLevelTop;
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          (pNVar1,StringLiteral_4390,(MethodInfo *)0x0);
                pNVar3 = (__this->fields)._levelLabel;
                if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                            (0,0,0,0x3f800000,pNVar3,(pNVar3->klass->vtable)._23_set_color.method);
                  pNVar3 = (__this->fields)._levelLabel;
                  pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                              (pNVar3,pSVar4,(pNVar3->klass->vtable)._75_set_text.method);
                    OHLDDIANEPE = local_24;
                    goto LAB_032b81dc;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032b81f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

