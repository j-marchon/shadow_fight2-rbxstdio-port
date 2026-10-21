// Core.Configs.Models.PackSettings$$.ctor @ RVA 0x34CB7F8

void Core_Configs_Models_PackSettings___ctor
               (Core_Configs_Models_PackSettings_o *__this,System_String_o *name,int32_t packType,
               System_String_o *itemsPackLabel,
               System_Collections_Generic_IEnumerable_LEGDPJHPEOB__o *conditions,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_IReadOnlyList_LEGDPJHPEOB__o **ppSVar2;
  
                    /* try { // try from 035cb820 to 036cb84b has its CatchHandler @ 035cbbc0 */
  if ((DAT_04568670 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
    DAT_04568670 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  thunk_FUN_01c20e04(&__this->fields,name);
  (__this->fields)._Type_k__BackingField = packType;
  ppSVar1 = &(__this->fields)._ItemsPackLabel_k__BackingField;
  *ppSVar1 = itemsPackLabel;
                    /* try { // try from 035cb888 to 036cb88f has its CatchHandler @ 035cbbbc */
  thunk_FUN_01c20e04(ppSVar1,itemsPackLabel);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LEGDPJHPEOB>_TypeInfo);
                    /* try { // try from 035cb898 to 036cb89f has its CatchHandler @ 035cbbb8 */
  System_Collections_Generic_List<object>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)conditions,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>__ctor__);
  ppSVar2 = &(__this->fields)._DownloadConditions_k__BackingField;
  *ppSVar2 = (System_Collections_Generic_IReadOnlyList_LEGDPJHPEOB__o *)__this_00;
                    /* try { // try from 035cb8a8 to 036cb8b7 has its CatchHandler @ 035cbbac */
                    /* try { // try from 035cb8b8 to 036cb8c7 has its CatchHandler @ 035cbba4 */
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  return;
}

