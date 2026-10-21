// MNLIBPAOCLG$$DKGKOFLFJJB @ RVA 0x31E9468

void MNLIBPAOCLG__DKGKOFLFJJB(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  KHEDNGODOIC_o *pKVar4;
  MEHKKHFBNLM_o *pMVar5;
  UnityEngine_GameObject_o **ppUVar6;
  UnityEngine_GameObject_o **ppUVar7;
  UnityEngine_Vector3_o UVar8;
  
  if ((DAT_04566d84 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&StringLiteral_4662);
    FUN_01bab630(&StringLiteral_7123);
    DAT_04566d84 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(pUVar1,StringLiteral_4662,(MethodInfo *)0x0);
  ppUVar6 = &(__this->fields).BAKAPMIJMEN;
  *ppUVar6 = pUVar1;
  thunk_FUN_01c20e04(ppUVar6,pUVar1);
  if (*ppUVar6 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>
              (*ppUVar6,Method_UnityEngine_GameObject_AddComponent<CocosAnimation>__);
    if ((*ppUVar6 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar6,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UVar8.fields.z = 1.0;
      UVar8.fields.x = 0.7;
      UVar8.fields.y = 1.0;
      UnityEngine_Transform__set_localScale(pUVar2,UVar8,(MethodInfo *)0x0);
      pUVar1 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
      UnityEngine_GameObject___ctor(pUVar1,StringLiteral_7123,(MethodInfo *)0x0);
      ppUVar7 = &(__this->fields).EHBIBHGMKGD;
      *ppUVar7 = pUVar1;
      thunk_FUN_01c20e04(ppUVar7,pUVar1);
      if (*ppUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0);
        pKVar4 = (__this->fields).ANDGPHHMNMC;
        if ((((pKVar4 != (KHEDNGODOIC_o *)0x0) &&
             (pUVar1 = (pKVar4->fields).LDAKOINICNJ, pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
            (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
            pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
           (UVar8 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localPosition(pUVar2,UVar8,(MethodInfo *)0x0);
          if (*ppUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0);
            pKVar4 = (__this->fields).ANDGPHHMNMC;
            if (((pKVar4 != (KHEDNGODOIC_o *)0x0) &&
                (pUVar1 = (pKVar4->fields).LDAKOINICNJ, pUVar1 != (UnityEngine_GameObject_o *)0x0))
               && ((pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_Transform_o *)0x0 &&
                   (UVar8 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0),
                   pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
              UnityEngine_Transform__set_localScale(pUVar2,UVar8,(MethodInfo *)0x0);
              if (*ppUVar7 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0);
                pMVar5 = (__this->fields).DDDKDGIEBFP;
                if (((pMVar5 != (MEHKKHFBNLM_o *)0x0) &&
                    (pUVar1 = (pMVar5->fields)._KDDKJJLDFFO_k__BackingField,
                    pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
                   (pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
                   pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
                  if (*ppUVar6 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar2 = UnityEngine_GameObject__get_transform(*ppUVar6,(MethodInfo *)0x0);
                    if ((*ppUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                       (pUVar3 = UnityEngine_GameObject__get_transform(*ppUVar7,(MethodInfo *)0x0),
                       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                      UnityEngine_Transform__SetParent(pUVar2,pUVar3,false,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

