// OGOKJDDJEOE$$DIGLGKAPOAB @ RVA 0x323B858

void OGOKJDDJEOE__DIGLGKAPOAB(OGOKJDDJEOE_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  GBJGJEGPHKD_o *__this_00;
  IEFEBEDLHNN_o *pIVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  OGOKJDDJEOE_o *__this_03;
  UnityEngine_Material_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar4;
  BEPJMNAHCAD_o *pBVar5;
  MNLIBPAOCLG_o *pMVar6;
  FCJBEKHDLAF_o *__this_04;
  UnityEngine_SpriteRenderer_o **ppUVar7;
  UnityEngine_SpriteRenderer_o *pUVar8;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456705f & 1) == 0) {
    FUN_01bab630(&BNLLEAIOKHF_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_16017);
    FUN_01bab630(&StringLiteral_16005);
    DAT_0456705f = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (BNLLEAIOKHF_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)BNLLEAIOKHF_TypeInfo)) {
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_04 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_04 != (FCJBEKHDLAF_o *)0x0) {
        if (IMMNELPBGIF != (Il2CppObject *)0x0) {
          if ((__this->fields).super.JGJNBILDCHK == 2) {
            pIVar4 = IMMNELPBGIF[1].klass;
          }
          else {
            pIVar4 = IMMNELPBGIF[1].monitor;
          }
          if ((pIVar4 != (Il2CppClass *)0x0) &&
             (__this_00 = (GBJGJEGPHKD_o *)pIVar4->vtable[0x11].method,
             __this_00 != (GBJGJEGPHKD_o *)0x0)) {
            pIVar2 = GBJGJEGPHKD__ILECMJOENMK(__this_00,(MethodInfo *)0x0);
            (__this->fields).HIIKOFEFMPG = pIVar2;
            thunk_FUN_01c20e04();
            FCJBEKHDLAF__KCHJHDCDKGB(__this_04,(MethodInfo *)0x0);
            pBVar5 = (__this_04->fields).FAJCMHDLBEJ;
            if ((pBVar5 != (BEPJMNAHCAD_o *)0x0) &&
               (pMVar6 = (pBVar5->fields).LIICCFBEOLC, pMVar6 != (MNLIBPAOCLG_o *)0x0)) {
              ppUVar7 = &(__this->fields).AMLBCOCBBPN;
              *ppUVar7 = (pMVar6->fields).JNBHKOBOIMD;
              thunk_FUN_01c20e04(ppUVar7);
              if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                 (__this_01 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
                if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                   (__this_02 = UnityEngine_Component__get_transform
                                          ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0),
                   __this_02 != (UnityEngine_Transform_o *)0x0)) {
                  value.fields.z = 1.0;
                  value.fields.x = 2000.0;
                  value.fields.y = 2000.0;
                  UnityEngine_Transform__set_localScale(__this_02,value,(MethodInfo *)0x0);
                  pUVar8 = *ppUVar7;
                  pUVar3 = OGOKJDDJEOE__KPHMCGKMLEN(__this_03,method_00);
                  if (pUVar8 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    UnityEngine_Renderer__set_material
                              ((UnityEngine_Renderer_o *)pUVar8,pUVar3,(MethodInfo *)0x0);
                    if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                       (pUVar3 = UnityEngine_Renderer__get_material
                                           ((UnityEngine_Renderer_o *)*ppUVar7,(MethodInfo *)0x0),
                       pUVar3 != (UnityEngine_Material_o *)0x0)) {
                      UnityEngine_Material__SetFloat
                                (pUVar3,StringLiteral_16005,
                                 *(float *)&(__this->fields).super.field_0x5c,(MethodInfo *)0x0);
                      pUVar8 = (__this->fields).AMLBCOCBBPN;
                      if ((pUVar8 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                         (pUVar3 = UnityEngine_Renderer__get_material
                                             ((UnityEngine_Renderer_o *)pUVar8,(MethodInfo *)0x0),
                         pUVar3 != (UnityEngine_Material_o *)0x0)) {
                        UnityEngine_Material__SetFloat
                                  (pUVar3,StringLiteral_16017,(__this->fields).IDIFGEKMKEJ,
                                   (MethodInfo *)0x0);
                        OGOKJDDJEOE__JJPNGMPBFKL(__this,method_01);
                        return;
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
    }
  }
  return;
}

