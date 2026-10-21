// InControl.VersionInfo$$UnityVersion @ RVA 0x316F1CC

InControl_VersionInfo_o InControl_VersionInfo__UnityVersion(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Text_RegularExpressions_Match_o *pSVar4;
  System_Text_RegularExpressions_GroupCollection_o *pSVar5;
  System_Text_RegularExpressions_Group_o *pSVar6;
  InControl_VersionInfo_o IVar7;
  
  if ((DAT_0456690f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&StringLiteral_15815);
    DAT_0456690f = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0326f23c to 0336f243 has its CatchHandler @ 0326f310 */
  pSVar3 = UnityEngine_Application__get_unityVersion((MethodInfo *)0x0);
                    /* try { // try from 0326f250 to 0336f25f has its CatchHandler @ 0326f314 */
  if ((System_Text_RegularExpressions_Regex_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Text_RegularExpressions_Regex_TypeInfo);
  }
                    /* try { // try from 0326f264 to 0336f273 has its CatchHandler @ 0326f2fc */
  pSVar4 = System_Text_RegularExpressions_Regex__Match(pSVar3,StringLiteral_15815,(MethodInfo *)0x0)
  ;
  if (pSVar4 != (System_Text_RegularExpressions_Match_o *)0x0) {
                    /* try { // try from 0326f274 to 0336f27b has its CatchHandler @ 0326f300 */
    pSVar5 = (System_Text_RegularExpressions_GroupCollection_o *)
             (*(pSVar4->klass->vtable)._5_get_Groups.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._5_get_Groups.method);
                    /* try { // try from 0326f284 to 0336f29b has its CatchHandler @ 0326f318 */
    if ((pSVar5 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
       (pSVar6 = System_Text_RegularExpressions_GroupCollection__get_Item
                           (pSVar5,1,(MethodInfo *)0x0),
       pSVar6 != (System_Text_RegularExpressions_Group_o *)0x0)) {
                    /* try { // try from 0326f2a4 to 0336f2bf has its CatchHandler @ 0326f30c */
      pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)pSVar6,(MethodInfo *)0x0);
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Convert_TypeInfo);
      }
                    /* try { // try from 0326f2c0 to 0336f2ef has its CatchHandler @ 0326f12c */
      IVar7.fields.Major = System_Convert__ToInt32(pSVar3,(MethodInfo *)0x0);
      pSVar5 = (System_Text_RegularExpressions_GroupCollection_o *)
               (*(pSVar4->klass->vtable)._5_get_Groups.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._5_get_Groups.method);
                    /* try { // try from 0326f2f0 to 0336f2f3 has its CatchHandler @ 0326f308 */
      if ((pSVar5 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
         (pSVar6 = System_Text_RegularExpressions_GroupCollection__get_Item
                             (pSVar5,2,(MethodInfo *)0x0),
         pSVar6 != (System_Text_RegularExpressions_Group_o *)0x0)) {
                    /* try { // try from 0326f2f4 to 0336f2f7 has its CatchHandler @ 0326f304 */
                    /* try { // try from 0326f2f8 to 0336f32f has its CatchHandler @ 0326f12c */
        pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)pSVar6,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f264 with catch @ 0326f2fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f274 with catch @ 0326f300
                        */
        iVar1 = System_Convert__ToInt32(pSVar3,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f2f4 with catch @ 0326f304
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f2f0 with catch @ 0326f308
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f2a4 with catch @ 0326f30c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f23c with catch @ 0326f310
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f250 with catch @ 0326f314
                        */
        pSVar5 = (System_Text_RegularExpressions_GroupCollection_o *)
                 (*(pSVar4->klass->vtable)._5_get_Groups.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._5_get_Groups.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f284 with catch @ 0326f318
                        */
        if ((pSVar5 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
           (pSVar6 = System_Text_RegularExpressions_GroupCollection__get_Item
                               (pSVar5,3,(MethodInfo *)0x0),
           pSVar6 != (System_Text_RegularExpressions_Group_o *)0x0)) {
                    /* try { // try from 0326f330 to 0336f333 has its CatchHandler @ 0326f354 */
          pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                             ((System_Text_RegularExpressions_Capture_o *)pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 0326f334 to 0336f35b has its CatchHandler @ 0326f12c */
          iVar2 = System_Convert__ToInt32(pSVar3,(MethodInfo *)0x0);
          IVar7.fields.Minor = iVar1;
          IVar7.fields.Patch = iVar2;
          IVar7.fields.Build = 0;
          return (InControl_VersionInfo_o)IVar7.fields;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0326f330 with catch @ 0326f354 */
  FUN_01bab8c8();
}

