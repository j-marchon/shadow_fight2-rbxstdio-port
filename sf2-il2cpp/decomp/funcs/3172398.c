// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$HOIIHIFOMGO @ RVA 0x3172398

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__HOIIHIFOMGO
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_GameObject_array *pUVar3;
  UnityEngine_Object_o *pUVar4;
  ulong uVar5;
  UnityEngine_Object_o *x;
  ulong uVar6;
  UnityEngine_SceneManagement_Scene_Fields local_68 [2];
  
  if ((DAT_0456693c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<DebugUI>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    DAT_0456693c = 1;
  }
  if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_68[0].m_Handle =
       (int32_t)UnityEngine_SceneManagement_SceneManager__GetActiveScene((MethodInfo *)0x0);
  pUVar3 = UnityEngine_SceneManagement_Scene__GetRootGameObjects
                     ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_68,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
    if (0 < (int)pUVar3->max_length) {
      uVar6 = 0;
      uVar5 = pUVar3->max_length & 0xffffffff;
      do {
        if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        x = (UnityEngine_Object_o *)pUVar3->m_Items[uVar6];
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 032724b8 to 0337256b has its CatchHandler @ 032724b8
                       catch() { ... } // from try @ 032724b8 with catch @ 032724b8
                       catch() { ... } // from try @ 032725e8 with catch @ 032724b8
                       catch() { ... } // from try @ 03272614 with catch @ 032724b8
                       catch() { ... } // from try @ 03272684 with catch @ 032724b8
                       catch() { ... } // from try @ 032726c8 with catch @ 032724b8
                       catch() { ... } // from try @ 03272700 with catch @ 032724b8 */
        bVar2 = UnityEngine_Object__op_Equality(x,pUVar4,(MethodInfo *)0x0);
        if (!bVar2) {
          if (x == (UnityEngine_Object_o *)0x0) goto LAB_032725b4;
          pUVar4 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             ((UnityEngine_GameObject_o *)x,
                              Method_UnityEngine_GameObject_GetComponent<DebugUI>__);
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar2) {
            pUVar4 = (UnityEngine_Object_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               ((UnityEngine_GameObject_o *)x,
                                Method_UnityEngine_GameObject_GetComponent<EventSystem>__);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar2) {
              pUVar4 = (UnityEngine_Object_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 ((UnityEngine_GameObject_o *)x,
                                  Method_UnityEngine_GameObject_GetComponent<RaidConnectionScreen>__
                                 );
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar2 = UnityEngine_Object__op_Inequality
                                (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0327256c to 03372573 has its CatchHandler @ 032726ac */
              if (!bVar2) {
                UnityEngine_GameObject__SetActive
                          ((UnityEngine_GameObject_o *)x,CJNHFNHJHPE,(MethodInfo *)0x0);
              }
            }
          }
        }
        uVar1 = (uint)pUVar3->max_length;
        uVar5 = (ulong)uVar1;
                    /* try { // try from 03272584 to 0337258f has its CatchHandler @ 0327269c */
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
                    /* try { // try from 032725a4 to 033725ab has its CatchHandler @ 03272600 */
    return;
  }
LAB_032725b4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032725b4 to 033725bf has its CatchHandler @ 032725fc */
  FUN_01bab8c8();
}

