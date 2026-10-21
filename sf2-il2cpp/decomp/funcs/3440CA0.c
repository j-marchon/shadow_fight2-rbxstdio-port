// InControl.InputControl$$ToString @ RVA 0x3440CA0

System_String_o *
InControl_InputControl__ToString(InControl_InputControl_o *__this,MethodInfo *method)

{
  Il2CppObject *arg1;
  System_String_o *pSVar1;
  float local_24;
  
                    /* catch() { ... } // from try @ 03540c94 with catch @ 03540cb8 */
                    /* try { // try from 03540cc0 to 03640cc7 has its CatchHandler @ 03540cdc */
                    /* try { // try from 03540cc8 to 03640cd3 has its CatchHandler @ 03540aac */
  if ((DAT_0456821c & 1) == 0) {
                    /* try { // try from 03540cd4 to 03640cdb has its CatchHandler @ 03540cdc */
    FUN_01bab630(&float_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03540cc0 with catch @ 03540cdc
                       catch(type#2 @ 00000000) { ... } // from try @ 03540cd4 with catch @ 03540cdc
                        */
    FUN_01bab630(&StringLiteral_15491);
                    /* try { // try from 03540ce8 to 03640eb3 has its CatchHandler @ 03540ce8
                       catch() { ... } // from try @ 03540ce8 with catch @ 03540ce8
                       catch() { ... } // from try @ 03540f20 with catch @ 03540ce8
                       catch() { ... } // from try @ 03540f40 with catch @ 03540ce8
                       catch() { ... } // from try @ 0354112c with catch @ 03540ce8
                       catch() { ... } // from try @ 035411fc with catch @ 03540ce8
                       catch() { ... } // from try @ 03541204 with catch @ 03540ce8
                       catch() { ... } // from try @ 03541288 with catch @ 03540ce8
                       catch() { ... } // from try @ 035412d8 with catch @ 03540ce8
                       catch() { ... } // from try @ 035412ec with catch @ 03540ce8
                       catch() { ... } // from try @ 03541320 with catch @ 03540ce8 */
    DAT_0456821c = 1;
  }
  local_24 = (__this->fields).thisState.fields.Value;
  pSVar1 = (__this->fields)._Handle_k__BackingField;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
  pSVar1 = System_String__Format(StringLiteral_15491,(Il2CppObject *)pSVar1,arg1,(MethodInfo *)0x0);
  return pSVar1;
}

