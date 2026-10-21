// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$Awake @ RVA 0x32B9D3C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Awake
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  System_Object_array *collection;
  System_Collections_Generic_List_MenuItemButton__o *pSVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *ACBNKLODJEG;
  MethodInfo *in_x3;
  int index;
  System_Collections_Generic_List_MenuItemButton__o **ppSVar3;
  
                    /* try { // try from 033b9d44 to 034b9d6f has its CatchHandler @ 033ba0e8 */
  if ((DAT_0456747d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<ScrollRect>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentsInChildren<MenuItemButton>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Count__);
                    /* try { // try from 033b9db0 to 034b9db7 has its CatchHandler @ 033ba0e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
                    /* try { // try from 033b9dc0 to 034b9dc7 has its CatchHandler @ 033ba0d4 */
    FUN_01bab630(&System_Collections_Generic_List<MenuItemButton>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_0456747d = 1;
  }
                    /* try { // try from 033b9dd8 to 034b9ddb has its CatchHandler @ 033ba090 */
  collection = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponentsInChildren<MenuItemButton>__);
                    /* try { // try from 033b9de4 to 034b9e03 has its CatchHandler @ 033ba09c */
  pSVar1 = (System_Collections_Generic_List_MenuItemButton__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MenuItemButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             Method_System_Collections_Generic_List<MenuItemButton>__ctor__);
  ppSVar3 = &(__this->fields)._buttons;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
                    /* try { // try from 033b9e1c to 034b9e23 has its CatchHandler @ 033ba0c0 */
  pUVar2 = (UnityEngine_UI_ScrollRect_o *)
           UnityEngine_Component__GetComponentInChildren<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponentInChildren<ScrollRect>__);
                    /* try { // try from 033b9e2c to 034b9e33 has its CatchHandler @ 033ba0c4 */
  (__this->fields)._scroll = pUVar2;
  thunk_FUN_01c20e04();
  pSVar1 = *ppSVar3;
  if (pSVar1 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
                    /* try { // try from 033b9e40 to 034b9e4b has its CatchHandler @ 033ba0cc */
    index = 0;
    do {
                    /* try { // try from 033b9e50 to 034b9e5b has its CatchHandler @ 033ba0c8 */
      if ((pSVar1->fields)._size <= index) {
        if (Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType != 0) {
                    /* try { // try from 033b9eb0 to 034b9ebb has its CatchHandler @ 033ba098 */
          Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
                    (__this,(__this->fields).selection,false,in_x3);
          return;
        }
                    /* try { // try from 033b9ebc to 034b9ecb has its CatchHandler @ 033ba0bc */
        return;
      }
      ACBNKLODJEG = (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,index,
                               Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
                    /* try { // try from 033b9e68 to 034b9e6b has its CatchHandler @ 033ba0a0 */
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__DHBIDNFGACI(__this,ACBNKLODJEG,index,in_x3);
      pSVar1 = (__this->fields)._buttons;
      index = index + 1;
                    /* try { // try from 033b9e80 to 034b9e87 has its CatchHandler @ 033ba0b8 */
    } while (pSVar1 != (System_Collections_Generic_List_MenuItemButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

