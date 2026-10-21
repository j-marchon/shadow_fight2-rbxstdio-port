// Nekki.SF2.GUI.Tutorial.TutorialNode$$.ctor @ RVA 0x32CAC70

void Nekki_SF2_GUI_Tutorial_TutorialNode___ctor
               (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  System_Collections_Generic_List_TutorialNode__o **ppSVar1;
  
  if ((DAT_04567518 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TutorialNode>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567518 = 1;
  }
  (__this->fields)._ID = StringLiteral_1;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_TutorialNode__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TutorialNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TutorialNode>__ctor__);
  ppSVar1 = &(__this->fields).EOIPAPCMGGF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

