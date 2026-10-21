// Nekki.SF2.GUI.Map.MapButton$$AONGGAOEBJM @ RVA 0x34A0D20

void Nekki_SF2_GUI_Map_MapButton__AONGGAOEBJM
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar3;
  System_Exception_o *__this_01;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  FKNCNNOOOIO_o *pFVar5;
  System_String_o *str1;
  CocosAnimation_o *pCVar6;
  float fVar7;
  
  if ((DAT_0456849a & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_22171);
    DAT_0456849a = 1;
    method = extraout_x1;
  }
  pCVar6 = (__this->fields)._animation;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pFVar5 = (__this->fields).AEPNEAIEKOL;
  if ((pFVar5 != (FKNCNNOOOIO_o *)0x0) &&
     (pCVar6 = (__this->fields)._animation, pCVar6 != (CocosAnimation_o *)0x0)) {
    iVar1 = (pFVar5->fields).BGHFADDGPAD;
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,iVar1 == 1,(MethodInfo *)0x0);
      if (iVar1 != 1) {
        return;
      }
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_22171,StringLiteral_1,(MethodInfo *)0x0);
      pFVar5 = (__this->fields).AEPNEAIEKOL;
      if ((pFVar5 != (FKNCNNOOOIO_o *)0x0) &&
         (pCVar6 = (__this->fields)._animation, pCVar6 != (CocosAnimation_o *)0x0)) {
        bVar2 = CocosAnimation__Init
                          (pCVar6,(pFVar5->fields).MEONABNPAPF,0,(System_String_o *)0x0,
                           (MethodInfo *)0x0);
        pFVar5 = (__this->fields).AEPNEAIEKOL;
        if (pFVar5 != (FKNCNNOOOIO_o *)0x0) {
          if (!bVar2) {
            str1 = (pFVar5->fields).MEONABNPAPF;
            pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5958);
            pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
            thunk_FUN_01bb9178(&System_Exception_TypeInfo);
            __this_01 = (System_Exception_o *)thunk_FUN_01bda818();
            System_Exception___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
            uVar4 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Map_MapButton_AONGGAOEBJM__);
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(__this_01,uVar4);
          }
          fVar7 = (pFVar5->fields).FMAIEIJAFPA;
          pCVar6 = (__this->fields)._animation;
          if (fVar7 <= 0.0) {
            fVar7 = 0.1;
          }
          if (pCVar6 != (CocosAnimation_o *)0x0) {
            CocosAnimation__SetFramesRange(pCVar6,0,-1,(MethodInfo *)0x0);
            pCVar6 = (__this->fields)._animation;
            if (pCVar6 != (CocosAnimation_o *)0x0) {
              (pCVar6->fields)._PPEGDOHGLJJ_k__BackingField = fVar7;
              CocosAnimation__SetFirstFrame(pCVar6,(MethodInfo *)0x0);
              pCVar6 = (__this->fields)._animation;
              if (pCVar6 != (CocosAnimation_o *)0x0) {
                (pCVar6->fields)._FEBBHCOAEMI_k__BackingField = 1;
                (pCVar6->fields)._NOAJIBNJKPE_k__BackingField = true;
                return;
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

