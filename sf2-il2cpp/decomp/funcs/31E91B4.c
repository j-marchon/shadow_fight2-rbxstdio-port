// MNLIBPAOCLG$$CPIADMPFDEL @ RVA 0x31E91B4

void MNLIBPAOCLG__CPIADMPFDEL(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  UnityEngine_Sprite_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  MethodInfo *extraout_x1;
  MNLIBPAOCLG_Fields *pMVar6;
  UnityEngine_SpriteRenderer_o **ppUVar7;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04566d80 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
                    /* try { // try from 032e91f8 to 033e9223 has its CatchHandler @ 032e93ac */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_12935);
    FUN_01bab630(&StringLiteral_3101);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 032e9230 to 033e927f has its CatchHandler @ 032e93b4 */
    DAT_04566d80 = 1;
    method = extraout_x1;
  }
  (__this->fields).DOGMHNFPALG = 0;
  pUVar1 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo,method);
  UnityEngine_GameObject___ctor(pUVar1,StringLiteral_3101,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_SpriteRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (pUVar1,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    pMVar6 = &__this->fields;
    pMVar6->NGMNLILMJAP = pUVar2;
    thunk_FUN_01c20e04(pMVar6,pUVar2);
                    /* try { // try from 032e9280 to 033e928b has its CatchHandler @ 032e93a4 */
    if (pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e928c to 033e9387 has its CatchHandler @ 032e8fec */
      UnityEngine_SpriteRenderer__set_flipY(pMVar6->NGMNLILMJAP,true,(MethodInfo *)0x0);
      pUVar2 = pMVar6->NGMNLILMJAP;
      if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar3 = KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1,StringLiteral_12935,false,(MethodInfo *)0x0)
      ;
      if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_SpriteRenderer__set_sprite(pUVar2,pUVar3,(MethodInfo *)0x0);
        if ((pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pMVar6->NGMNLILMJAP,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = 1.0;
          value.fields.x = 0.5;
          value.fields.y = -0.5;
          UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
          if (pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pMVar6->NGMNLILMJAP,(MethodInfo *)0x0);
            pUVar1 = (__this->fields).LDAKOINICNJ;
            if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar4,pUVar5,false,(MethodInfo *)0x0);
              pUVar1 = (UnityEngine_GameObject_o *)
                       thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
              UnityEngine_GameObject___ctor(pUVar1,StringLiteral_3101,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar2 = (UnityEngine_SpriteRenderer_o *)
                         UnityEngine_GameObject__AddComponent<object>
                                   (pUVar1,
                                    Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
                ppUVar7 = &(__this->fields).JFILNBPGNKO;
                *ppUVar7 = pUVar2;
                    /* try { // try from 032e9388 to 033e938f has its CatchHandler @ 032e93a8 */
                thunk_FUN_01c20e04(ppUVar7,pUVar2);
                    /* try { // try from 032e9390 to 033e9393 has its CatchHandler @ 032e8fec */
                if (*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e9394 to 033e9397 has its CatchHandler @ 032e93a0 */
                    /* try { // try from 032e9398 to 033e93c3 has its CatchHandler @ 032e8fec */
                  UnityEngine_SpriteRenderer__set_flipY(*ppUVar7,true,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9394 with catch @ 032e93a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9280 with catch @ 032e93a4
                        */
                  if (pMVar6->NGMNLILMJAP != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9388 with catch @ 032e93a8
                        */
                    pUVar2 = *ppUVar7;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e91f8 with catch @ 032e93ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e919c with catch @ 032e93b0
                        */
                    pUVar3 = UnityEngine_SpriteRenderer__get_sprite
                                       (pMVar6->NGMNLILMJAP,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e9230 with catch @ 032e93b4
                        */
                    if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e93c4 to 033e93c7 has its CatchHandler @ 032e93d8 */
                      UnityEngine_SpriteRenderer__set_sprite(pUVar2,pUVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032e93c4 with catch @ 032e93d8 */
                      if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                         (pUVar4 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0)
                         , pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                        value_00.fields.z = 1.0;
                        value_00.fields.x = 0.5;
                        value_00.fields.y = -0.5;
                    /* try { // try from 032e93e0 to 033e9447 has its CatchHandler @ 032e945c */
                        UnityEngine_Transform__set_localScale(pUVar4,value_00,(MethodInfo *)0x0);
                        if (*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) {
                          pUVar4 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)*ppUVar7,(MethodInfo *)0x0)
                          ;
                          pUVar1 = (__this->fields).LDAKOINICNJ;
                          if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                             (pUVar5 = UnityEngine_GameObject__get_transform
                                                 (pUVar1,(MethodInfo *)0x0),
                             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__SetParent(pUVar4,pUVar5,false,(MethodInfo *)0x0);
                            if ((*ppUVar7 != (UnityEngine_SpriteRenderer_o *)0x0) &&
                               (pUVar1 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)*ppUVar7,
                                                    (MethodInfo *)0x0),
                               pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032e9448 to 033e9453 has its CatchHandler @ 032e8fec */
                    /* try { // try from 032e9454 to 033e945b has its CatchHandler @ 032e945c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032e93e0 with catch @ 032e945c
                       catch(type#2 @ 00000000) { ... } // from try @ 032e9454 with catch @ 032e945c
                        */
                              UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

