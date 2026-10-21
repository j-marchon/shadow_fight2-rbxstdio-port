// Nekki.SF2.GUI.Profile.PerkContent$$.ctor @ RVA 0x329744C

void Nekki_SF2_GUI_Profile_PerkContent___ctor
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyIcon__o *__this_00;
  System_Collections_Generic_List_KeyIcon__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456736f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyIcon>_TypeInfo);
    DAT_0456736f = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KeyIcon__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyIcon>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KeyIcon>__ctor__);
  ppSVar1 = &(__this->fields).CHKIKLICNBL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

