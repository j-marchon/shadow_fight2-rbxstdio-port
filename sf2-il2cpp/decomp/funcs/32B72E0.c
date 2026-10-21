// KHEDNGODOIC$$JGDMBLPAHIN @ RVA 0x32B72E0

void KHEDNGODOIC__JGDMBLPAHIN(KHEDNGODOIC_o *__this,float IDBMGJFGIJH,MethodInfo *method)

{
  ENOJCLHOINK_o *pEVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  MethodInfo *extraout_x1;
  ENOJCLHOINK_o **ppEVar5;
  
  if ((DAT_0456745e & 1) == 0) {
    FUN_01bab630(&ENOJCLHOINK_TypeInfo);
    DAT_0456745e = 1;
    method = extraout_x1;
  }
  pEVar1 = (ENOJCLHOINK_o *)thunk_FUN_01bda818(ENOJCLHOINK_TypeInfo,method);
  ENOJCLHOINK___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar5 = &(__this->fields).HGCEPEBIDFB;
  *ppEVar5 = pEVar1;
  thunk_FUN_01c20e04(ppEVar5,pEVar1);
  if (*ppEVar5 != (ENOJCLHOINK_o *)0x0) {
    ENOJCLHOINK__HLAKMKPFDAC(*ppEVar5,IDBMGJFGIJH,(MethodInfo *)0x0);
    if ((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
       (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).LDAKOINICNJ;
      if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(pUVar3,pUVar4,false,(MethodInfo *)0x0);
        if (((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
            (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0))
           && (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
              pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0x3c23d70a) << 0x40),(MethodInfo *)0x0);
          pEVar1 = (ENOJCLHOINK_o *)thunk_FUN_01bda818(ENOJCLHOINK_TypeInfo);
          ENOJCLHOINK___ctor(pEVar1,(MethodInfo *)0x0);
          ppEVar5 = &(__this->fields).FBGFDHMKFKI;
          *ppEVar5 = pEVar1;
          thunk_FUN_01c20e04(ppEVar5,pEVar1);
          if (*ppEVar5 != (ENOJCLHOINK_o *)0x0) {
            ENOJCLHOINK__HLAKMKPFDAC(*ppEVar5,IDBMGJFGIJH,(MethodInfo *)0x0);
            if ((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
               (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0
               )) {
              pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              pUVar2 = (__this->fields).LDAKOINICNJ;
              if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent(pUVar3,pUVar4,false,(MethodInfo *)0x0);
                if (((*ppEVar5 != (ENOJCLHOINK_o *)0x0) &&
                    (pUVar2 = ((*ppEVar5)->fields).LDAKOINICNJ,
                    pUVar2 != (UnityEngine_GameObject_o *)0x0)) &&
                   (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0xbc23d70a) << 0x40),
                             (MethodInfo *)0x0);
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

