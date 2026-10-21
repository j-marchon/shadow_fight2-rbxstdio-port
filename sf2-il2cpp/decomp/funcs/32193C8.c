// Nekki.SF2.GUI.Map.BattlePrize$$.ctor @ RVA 0x32193C8

void Nekki_SF2_GUI_Map_BattlePrize___ctor
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  System_Collections_Generic_List_BattlePrizeElement__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566eea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BattlePrizeElement>_TypeInfo);
    DAT_04566eea = 1;
    method = extraout_x1;
  }
  (__this->fields)._spacing = 20.0;
  __this_00 = (System_Collections_Generic_List_BattlePrizeElement__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BattlePrizeElement>_TypeInfo,method
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BattlePrizeElement>__ctor__);
  ppSVar1 = &(__this->fields).JMAMFIMIIFA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).MOOOFNAMCME = -1.0;
  (__this->fields).LFJGFLNMBMC = 0x168;
  (__this->fields).IKBBLGEBDGM = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

