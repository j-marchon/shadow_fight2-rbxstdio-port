// Nekki.SF2.GUI.Dialogs.NewsDialog$$GKPJMHOFIOO @ RVA 0x350DC14

void Nekki_SF2_GUI_Dialogs_NewsDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *item;
  System_Collections_Generic_List_BCGLDKLKKDA__o *pSVar3;
  System_String_o **ppSVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_045688dd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
                    /* try { // try from 0360dc54 to 0370dcf3 has its CatchHandler @ 0360d8bc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045688dd = 1;
  }
  pNVar2 = (__this->fields)._picture;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).HAGOPBBNBGE;
    if ((pSVar3 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) &&
       (__this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,0 < (pSVar3->fields)._size,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).HAGOPBBNBGE;
      if (pSVar3 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
        if ((pSVar3->fields)._size < 1) {
                    /* catch() { ... } // from try @ 0360dab0 with catch @ 0360dd58 */
                    /* catch() { ... } // from try @ 0360da54 with catch @ 0360dd5c */
                    /* catch() { ... } // from try @ 0360dcf4 with catch @ 0360dd60 */
          return;
        }
        item = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,0,
                          Method_System_Collections_Generic_List<BCGLDKLKKDA>_get_Item__);
        if (item != (Il2CppObject *)0x0) {
          (*(__this->klass->vtable)._30_EJHAPHAHMHG.methodPtr)
                    (__this,item[4].klass,(__this->klass->vtable)._30_EJHAPHAHMHG.method);
          ppSVar4 = &(__this->fields).BPOCMBDOBOC;
          *ppSVar4 = (System_String_o *)item[1].klass;
          thunk_FUN_01c20e04(ppSVar4);
          pSVar3 = (__this->fields).HAGOPBBNBGE;
                    /* try { // try from 0360dcf4 to 0370dcfb has its CatchHandler @ 0360dd60 */
          if (pSVar3 != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
                    /* try { // try from 0360dcfc to 0370dcff has its CatchHandler @ 0360dd48 */
                    /* try { // try from 0360dd00 to 0370dd03 has its CatchHandler @ 0360dd44 */
                    /* try { // try from 0360dd04 to 0370dd07 has its CatchHandler @ 0360dd38 */
                    /* try { // try from 0360dd08 to 0370dd0b has its CatchHandler @ 0360dd28 */
                    /* try { // try from 0360dd0c to 0370dd0f has its CatchHandler @ 0360dd44 */
                    /* try { // try from 0360dd10 to 0370dd13 has its CatchHandler @ 0360d8bc */
            System_Collections_Generic_List<object>__Remove
                      ((System_Collections_Generic_List_object__o *)pSVar3,item,
                       Method_System_Collections_Generic_List<BCGLDKLKKDA>_Remove__);
                    /* try { // try from 0360dd14 to 0370dd17 has its CatchHandler @ 0360dd20 */
                    /* try { // try from 0360dd18 to 0370dd77 has its CatchHandler @ 0360d8bc */
            x = item[2].monitor;
                    /* catch() { ... } // from try @ 0360dd14 with catch @ 0360dd20 */
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0360db64 with catch @ 0360dd24 */
              thunk_FUN_01ba7564();
            }
                    /* catch() { ... } // from try @ 0360dd08 with catch @ 0360dd28 */
                    /* catch() { ... } // from try @ 0360db40 with catch @ 0360dd2c */
                    /* catch() { ... } // from try @ 0360db58 with catch @ 0360dd30 */
                    /* catch() { ... } // from try @ 0360db7c with catch @ 0360dd34 */
            bVar1 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0360dd04 with catch @ 0360dd38 */
            if (!bVar1) {
                    /* try { // try from 0360dd78 to 0370dd7b has its CatchHandler @ 0360dd8c */
                    /* WARNING: Could not recover jumptable at 0x0360dd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(__this->klass->vtable)._36_MKLEJABEFLH.methodPtr)
                        (__this,1,(__this->klass->vtable)._36_MKLEJABEFLH.method);
              return;
            }
                    /* catch() { ... } // from try @ 0360db94 with catch @ 0360dd3c */
            pNVar2 = (__this->fields)._picture;
                    /* catch() { ... } // from try @ 0360dba0 with catch @ 0360dd40 */
            if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* catch() { ... } // from try @ 0360dd00 with catch @ 0360dd44
                       catch() { ... } // from try @ 0360dd0c with catch @ 0360dd44 */
                    /* catch() { ... } // from try @ 0360dcfc with catch @ 0360dd48 */
                    /* catch() { ... } // from try @ 0360db28 with catch @ 0360dd4c */
                    /* catch() { ... } // from try @ 0360db18 with catch @ 0360dd50 */
                    /* catch() { ... } // from try @ 0360dbd4 with catch @ 0360dd54 */
              UnityEngine_UI_Image__set_sprite
                        ((UnityEngine_UI_Image_o *)pNVar2,item[2].monitor,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

