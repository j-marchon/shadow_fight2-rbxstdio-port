// TypeDefIndex 1807
// Namespace: InControl
// public class InputManager
// Fields:
//   public static readonly VersionInfo Version; // 0x0
//   private static Action OnSetup; // 0x10
//   private static Action<ulong, float> OnUpdate; // 0x18
//   private static Action<InputDevice> OnDeviceAttached; // 0x20
//   private static Action<InputDevice> OnDeviceDetached; // 0x28
//   private static Action<InputDevice> OnActiveDeviceChanged; // 0x30
//   private static Action<InputDevice> OnDevicePartWasDetached; // 0x38
//   private static Action<InputDevice> OnDeviceStyleChanged; // 0x40
//   private static List<InputDeviceManager> inputDeviceManagers; // 0x48
//   private static InputDevice activeDevice; // 0x50
//   private static List<InputDevice> devices; // 0x58
//   public static ReadOnlyCollection<InputDevice> Devices; // 0x60
//   private static string <Platform>k__BackingField; // 0x68
//   private static bool <MenuWasPressed>k__BackingField; // 0x70
//   public static bool InvertYAxis; // 0x71
//   private static bool isDualMode; // 0x72
//   private static bool enableXInput; // 0x73
//   private static bool isSetup; // 0x74
//   private static float initialTime; // 0x78
//   private static float currentTime; // 0x7C
//   private static float lastUpdateTime; // 0x80
//   private static ulong currentTick; // 0x88
//   private static Nullable<VersionInfo> unityVersion; // 0x90

// ===== public static void add_OnSetup(Action value)  [RVA 0x32143AC]
// InControl.InputManager$$add_OnSetup @ RVA 0x32143AC

void InControl_InputManager__add_OnSetup(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
                    /* catch() { ... } // from try @ 03314390 with catch @ 033143b8 */
                    /* try { // try from 033143c0 to 034143c7 has its CatchHandler @ 033143e0 */
                    /* try { // try from 033143c8 to 034143d7 has its CatchHandler @ 03314138 */
  if ((DAT_04566ead & 1) == 0) {
                    /* try { // try from 033143d8 to 034143df has its CatchHandler @ 033143e0 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033143c0 with catch @ 033143e0
                       catch(type#2 @ 00000000) { ... } // from try @ 033143d8 with catch @ 033143e0
                        */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ead = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnSetup;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnSetup,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}


// ===== public static void remove_OnSetup(Action value)  [RVA 0x3214488]
// InControl.InputManager$$remove_OnSetup @ RVA 0x3214488

void InControl_InputManager__remove_OnSetup(System_Action_o *value,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *source;
  
  if ((DAT_04566eae & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eae = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnSetup;
  do {
    pSVar2 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnSetup,pSVar2,source);
    bVar1 = source != pSVar3;
    source = pSVar3;
  } while (bVar1);
  return;
}


// ===== public static void add_OnUpdate(Action<ulong, float> value)  [RVA 0x3214564]
// InControl.InputManager$$add_OnUpdate @ RVA 0x3214564

void InControl_InputManager__add_OnUpdate(System_Action_ulong__float__o *value,MethodInfo *method)

{
  System_Action_ulong__float__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ulong__float__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_ulong__float__o *a;
  
  if ((DAT_04566eaf & 1) == 0) {
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eaf = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnUpdate;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<ulong,_float>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ulong,_float>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_ulong__float__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnUpdate,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void remove_OnUpdate(Action<ulong, float> value)  [RVA 0x3214658]
// InControl.InputManager$$remove_OnUpdate @ RVA 0x3214658

void InControl_InputManager__remove_OnUpdate
               (System_Action_ulong__float__o *value,MethodInfo *method)

{
  System_Action_ulong__float__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_ulong__float__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_ulong__float__o *source;
  
  if ((DAT_04566eb0 & 1) == 0) {
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb0 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnUpdate;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<ulong,_float>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<ulong,_float>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_ulong__float__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnUpdate,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void add_OnDeviceAttached(Action<InputDevice> value)  [RVA 0x321474C]
// InControl.InputManager$$add_OnDeviceAttached @ RVA 0x321474C

void InControl_InputManager__add_OnDeviceAttached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
  if ((DAT_04566eb1 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb1 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033147a0 to 034149cb has its CatchHandler @ 033147a0
                       catch() { ... } // from try @ 033147a0 with catch @ 033147a0
                       catch() { ... } // from try @ 03314ae0 with catch @ 033147a0
                       catch() { ... } // from try @ 03314b50 with catch @ 033147a0
                       catch() { ... } // from try @ 03314b90 with catch @ 033147a0
                       catch() { ... } // from try @ 03314bc0 with catch @ 033147a0 */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached,lVar4,a)
    ;
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void remove_OnDeviceAttached(Action<InputDevice> value)  [RVA 0x3214840]
// InControl.InputManager$$remove_OnDeviceAttached @ RVA 0x3214840

void InControl_InputManager__remove_OnDeviceAttached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *source;
  
  if ((DAT_04566eb2 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb2 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached,lVar4,
                          source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void add_OnDeviceDetached(Action<InputDevice> value)  [RVA 0x3214934]
// InControl.InputManager$$add_OnDeviceDetached @ RVA 0x3214934

void InControl_InputManager__add_OnDeviceDetached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
  if ((DAT_04566eb3 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb3 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached,lVar4,a)
    ;
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void remove_OnDeviceDetached(Action<InputDevice> value)  [RVA 0x3214A28]
// InControl.InputManager$$remove_OnDeviceDetached @ RVA 0x3214A28

void InControl_InputManager__remove_OnDeviceDetached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *source;
  
                    /* try { // try from 03314a48 to 03414a6b has its CatchHandler @ 03314b54 */
  if ((DAT_04566eb4 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb4 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03314a7c to 03414adf has its CatchHandler @ 03314b74 */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03314ae0 to 03414b2b has its CatchHandler @ 033147a0 */
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached,lVar4,
                          source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void add_OnActiveDeviceChanged(Action<InputDevice> value)  [RVA 0x3214B1C]
// InControl.InputManager$$add_OnActiveDeviceChanged @ RVA 0x3214B1C

void InControl_InputManager__add_OnActiveDeviceChanged
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
                    /* try { // try from 03314b2c to 03414b2f has its CatchHandler @ 03314b6c */
                    /* try { // try from 03314b30 to 03414b37 has its CatchHandler @ 03314b70 */
                    /* try { // try from 03314b38 to 03414b3b has its CatchHandler @ 03314b60 */
                    /* try { // try from 03314b3c to 03414b3f has its CatchHandler @ 03314b5c */
                    /* try { // try from 03314b40 to 03414b43 has its CatchHandler @ 03314b58 */
  if ((DAT_04566eb5 & 1) == 0) {
                    /* try { // try from 03314b44 to 03414b4b has its CatchHandler @ 03314b68 */
                    /* try { // try from 03314b4c to 03414b4f has its CatchHandler @ 03314b50 */
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
                    /* catch() { ... } // from try @ 03314b4c with catch @ 03314b50
                       try { // try from 03314b50 to 03414b8b has its CatchHandler @ 033147a0 */
                    /* catch() { ... } // from try @ 03314a48 with catch @ 03314b54 */
                    /* catch() { ... } // from try @ 03314b40 with catch @ 03314b58 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* catch() { ... } // from try @ 03314b3c with catch @ 03314b5c */
                    /* catch() { ... } // from try @ 03314b38 with catch @ 03314b60 */
    DAT_04566eb5 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033149cc with catch @ 03314b64 */
                    /* catch() { ... } // from try @ 03314b44 with catch @ 03314b68 */
                    /* catch() { ... } // from try @ 03314b2c with catch @ 03314b6c */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03314b30 with catch @ 03314b70 */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
                    /* catch() { ... } // from try @ 03314a7c with catch @ 03314b74 */
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
  do {
                    /* try { // try from 03314b8c to 03414b8f has its CatchHandler @ 03314bb0 */
                    /* try { // try from 03314b90 to 03414bb7 has its CatchHandler @ 033147a0 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* try { // try from 03314bb8 to 03414bbf has its CatchHandler @ 03314bd4 */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
                    /* catch() { ... } // from try @ 03314b8c with catch @ 03314bb0 */
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 03314bc0 to 03414bcb has its CatchHandler @ 033147a0 */
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03314bcc to 03414bd3 has its CatchHandler @ 03314bd4 */
    }
                    /* catch() { ... } // from try @ 03314bb8 with catch @ 03314bd4
                       catch() { ... } // from try @ 03314bcc with catch @ 03314bd4 */
                    /* try { // try from 03314bd8 to 03414cc3 has its CatchHandler @ 03314bd8
                       catch() { ... } // from try @ 03314bd8 with catch @ 03314bd8
                       catch() { ... } // from try @ 03314ccc with catch @ 03314bd8
                       catch() { ... } // from try @ 03314e00 with catch @ 03314bd8
                       catch() { ... } // from try @ 03314e24 with catch @ 03314bd8
                       catch() { ... } // from try @ 03314e64 with catch @ 03314bd8 */
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged,
                          lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void remove_OnActiveDeviceChanged(Action<InputDevice> value)  [RVA 0x3214C10]
// InControl.InputManager$$remove_OnActiveDeviceChanged @ RVA 0x3214C10

void InControl_InputManager__remove_OnActiveDeviceChanged
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *source;
  
  if ((DAT_04566eb6 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb6 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03314cc4 to 03414ccb has its CatchHandler @ 03314e08 */
                    /* try { // try from 03314ccc to 03414dfb has its CatchHandler @ 03314bd8 */
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged,
                          lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void add_OnDevicePartWasDetached(Action<InputDevice> value)  [RVA 0x3214D04]
// InControl.InputManager$$add_OnDevicePartWasDetached @ RVA 0x3214D04

void InControl_InputManager__add_OnDevicePartWasDetached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
  if ((DAT_04566eb7 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb7 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached,
                          lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void remove_OnDevicePartWasDetached(Action<InputDevice> value)  [RVA 0x3214DF8]
// InControl.InputManager$$remove_OnDevicePartWasDetached @ RVA 0x3214DF8

void InControl_InputManager__remove_OnDevicePartWasDetached
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *source;
  
                    /* try { // try from 03314dfc to 03414dff has its CatchHandler @ 03314e04 */
                    /* try { // try from 03314e00 to 03414e1f has its CatchHandler @ 03314bd8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314dfc with catch @ 03314e04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314cc4 with catch @ 03314e08
                        */
  if ((DAT_04566eb8 & 1) == 0) {
                    /* try { // try from 03314e20 to 03414e23 has its CatchHandler @ 03314e4c */
                    /* try { // try from 03314e24 to 03414e5b has its CatchHandler @ 03314bd8 */
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb8 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03314e20 with catch @ 03314e4c */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
                    /* try { // try from 03314e5c to 03414e63 has its CatchHandler @ 03314e78 */
  source = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  do {
                    /* try { // try from 03314e64 to 03414e6f has its CatchHandler @ 03314bd8 */
                    /* try { // try from 03314e70 to 03414e77 has its CatchHandler @ 03314e78 */
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03314e5c with catch @ 03314e78
                       catch(type#2 @ 00000000) { ... } // from try @ 03314e70 with catch @ 03314e78
                        */
                    /* try { // try from 03314e7c to 03414f3b has its CatchHandler @ 03314e7c
                       catch() { ... } // from try @ 03314e7c with catch @ 03314e7c
                       catch() { ... } // from try @ 03314f70 with catch @ 03314e7c
                       catch() { ... } // from try @ 03314fb8 with catch @ 03314e7c
                       catch() { ... } // from try @ 03314fe4 with catch @ 03314e7c
                       catch() { ... } // from try @ 03315014 with catch @ 03314e7c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached,
                          lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static void add_OnDeviceStyleChanged(Action<InputDevice> value)  [RVA 0x3214EEC]
// InControl.InputManager$$add_OnDeviceStyleChanged @ RVA 0x3214EEC

void InControl_InputManager__add_OnDeviceStyleChanged
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *a;
  
  if ((DAT_04566eb9 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566eb9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03314f3c to 03414f43 has its CatchHandler @ 03314fc8 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  a = InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  do {
                    /* try { // try from 03314f64 to 03414f6f has its CatchHandler @ 03314fbc */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 03314f70 to 03414faf has its CatchHandler @ 03314e7c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03314fb0 to 03414fb3 has its CatchHandler @ 03314fc4 */
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged,
                          lVar4,a);
                    /* try { // try from 03314fb4 to 03414fb7 has its CatchHandler @ 03314fc0 */
    bVar2 = a != pSVar5;
    a = pSVar5;
                    /* try { // try from 03314fb8 to 03414fdf has its CatchHandler @ 03314e7c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314f64 with catch @ 03314fbc
                        */
  } while (bVar2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314fb4 with catch @ 03314fc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314fb0 with catch @ 03314fc4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03314f3c with catch @ 03314fc8
                        */
  return;
}


// ===== public static void remove_OnDeviceStyleChanged(Action<InputDevice> value)  [RVA 0x3214FE0]
// InControl.InputManager$$remove_OnDeviceStyleChanged @ RVA 0x3214FE0

void InControl_InputManager__remove_OnDeviceStyleChanged
               (System_Action_InputDevice__o *value,MethodInfo *method)

{
  System_Action_InputDevice__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_InputDevice__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *source;
  
                    /* try { // try from 03314fe0 to 03414fe3 has its CatchHandler @ 03315004 */
                    /* try { // try from 03314fe4 to 0341500b has its CatchHandler @ 03314e7c */
                    /* catch() { ... } // from try @ 03314fe0 with catch @ 03315004 */
  if ((DAT_04566eba & 1) == 0) {
                    /* try { // try from 0331500c to 03415013 has its CatchHandler @ 03315028 */
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
                    /* try { // try from 03315014 to 0341501f has its CatchHandler @ 03314e7c */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03315020 to 03415027 has its CatchHandler @ 03315028 */
    DAT_04566eba = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0331500c with catch @ 03315028
                       catch(type#2 @ 00000000) { ... } // from try @ 03315020 with catch @ 03315028
                        */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  source = InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = System_Action<InputDevice>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* try { // try from 0331507c to 0341514b has its CatchHandler @ 0331507c
                       catch() { ... } // from try @ 0331507c with catch @ 0331507c
                       catch() { ... } // from try @ 033151c8 with catch @ 0331507c
                       catch() { ... } // from try @ 033151f4 with catch @ 0331507c
                       catch() { ... } // from try @ 03315228 with catch @ 0331507c
                       catch() { ... } // from try @ 03315258 with catch @ 0331507c */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<InputDevice>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_InputDevice__o *)
             FUN_01c07368(&InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged,
                          lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public static string get_Platform()  [RVA 0x32150D4]
// InControl.InputManager$$get_Platform @ RVA 0x32150D4

System_String_o * InControl_InputManager__get_Platform(MethodInfo *method)

{
  if ((DAT_04566ebb & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebb = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
}


// ===== private static void set_Platform(string value)  [RVA 0x321512C]
// InControl.InputManager$$set_Platform @ RVA 0x321512C

void InControl_InputManager__set_Platform(System_String_o *value,MethodInfo *method)

{
  System_String_o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ebc & 1) == 0) {
                    /* try { // try from 0331514c to 03415153 has its CatchHandler @ 03315208 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebc = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  ppSVar1 = &InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
  *ppSVar1 = value;
  thunk_FUN_01c20e04(ppSVar1,value);
  return;
}


// ===== public static bool get_MenuWasPressed()  [RVA 0x321518C]
// InControl.InputManager$$get_MenuWasPressed @ RVA 0x321518C

bool InControl_InputManager__get_MenuWasPressed(MethodInfo *method)

{
                    /* try { // try from 033151a0 to 034151a3 has its CatchHandler @ 033151f8 */
                    /* try { // try from 033151a4 to 034151b3 has its CatchHandler @ 03315204 */
  if ((DAT_04566ebd & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebd = 1;
  }
                    /* try { // try from 033151bc to 034151c7 has its CatchHandler @ 03315200 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033151c8 to 034151eb has its CatchHandler @ 0331507c */
    thunk_FUN_01ba7564();
  }
  return InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField;
}


// ===== private static void set_MenuWasPressed(bool value)  [RVA 0x32151E4]
// InControl.InputManager$$set_MenuWasPressed @ RVA 0x32151E4

void InControl_InputManager__set_MenuWasPressed(bool value,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033151ec to 034151f3 has its CatchHandler @ 033151fc */
                    /* try { // try from 033151f4 to 03415223 has its CatchHandler @ 0331507c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151a0 with catch @ 033151f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151ec with catch @ 033151fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151bc with catch @ 03315200
                        */
  if ((DAT_04566ebe & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033151a4 with catch @ 03315204
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331514c with catch @ 03315208
                        */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ebe = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315224 to 03415227 has its CatchHandler @ 03315248 */
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
                    /* try { // try from 03315228 to 0341524f has its CatchHandler @ 0331507c */
  }
  InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField = value;
  return;
}


// ===== public static bool get_IsDualMode()  [RVA 0x3215244]
// InControl.InputManager$$get_IsDualMode @ RVA 0x3215244

bool InControl_InputManager__get_IsDualMode(MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03315224 with catch @ 03315248 */
                    /* try { // try from 03315250 to 03415257 has its CatchHandler @ 0331526c */
                    /* try { // try from 03315258 to 03415263 has its CatchHandler @ 0331507c */
  if ((DAT_04566ebf & 1) == 0) {
                    /* try { // try from 03315264 to 0341526b has its CatchHandler @ 0331526c */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315250 with catch @ 0331526c
                       catch(type#2 @ 00000000) { ... } // from try @ 03315264 with catch @ 0331526c
                        */
    DAT_04566ebf = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03315294 to 03415347 has its CatchHandler @ 03315294
                       catch() { ... } // from try @ 03315294 with catch @ 03315294
                       catch() { ... } // from try @ 03315350 with catch @ 03315294
                       catch() { ... } // from try @ 03315400 with catch @ 03315294
                       catch() { ... } // from try @ 03315428 with catch @ 03315294
                       catch() { ... } // from try @ 03315458 with catch @ 03315294 */
  return InControl_InputManager_TypeInfo->static_fields->isDualMode;
}


// ===== public static void set_IsDualMode(bool value)  [RVA 0x321529C]
// InControl.InputManager$$set_IsDualMode @ RVA 0x321529C

void InControl_InputManager__set_IsDualMode(bool value,MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  InControl_InputManager_StaticFields *pIVar1;
  
  if ((DAT_04566ec0 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec0 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    method = extraout_x1_00;
  }
  pIVar1 = InControl_InputManager_TypeInfo->static_fields;
  if (pIVar1->isDualMode == value) {
    return;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)
                thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    pIVar1 = InControl_InputManager_TypeInfo->static_fields;
  }
  pIVar1->isDualMode = value;
  InControl_InputManager__UpdateDeviceManagersDualMode((MethodInfo *)method_00);
  return;
}


// ===== public static void Setup()  [RVA 0x32154F4]
// InControl.InputManager$$Setup @ RVA 0x32154F4

void InControl_InputManager__Setup(MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  
  if ((DAT_04566ec1 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec1 = 1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
  InControl_InputManager__SetupInternal((MethodInfo *)method_00);
  return;
}


// ===== private static void InputManager_OnDevicePartDettached(InputDevice p_device)  [RVA 0x3215900]
// InControl.InputManager$$InputManager_OnDevicePartDettached @ RVA 0x3215900

void InControl_InputManager__InputManager_OnDevicePartDettached
               (InControl_InputDevice_o *p_device,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *pSVar1;
  
                    /* try { // try from 0331591c to 034159b3 has its CatchHandler @ 0331591c
                       catch() { ... } // from try @ 0331591c with catch @ 0331591c
                       catch() { ... } // from try @ 033159bc with catch @ 0331591c
                       catch() { ... } // from try @ 03315a08 with catch @ 0331591c
                       catch() { ... } // from try @ 03315a2c with catch @ 0331591c
                       catch() { ... } // from try @ 03315a5c with catch @ 0331591c */
  if ((DAT_04566ec2 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec2 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pSVar1 = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  if (pSVar1 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0331596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,p_device,(pSVar1->fields).super.super.method
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static void SetupInternal()  [RVA 0x3215540]
// InControl.InputManager$$SetupInternal @ RVA 0x3215540

void InControl_InputManager__SetupInternal(MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  System_String_o **ppSVar3;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o **ppSVar4;
  System_Action_o **ppSVar5;
  System_Action_InputDevice__o *value;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  InControl_InputManager_StaticFields *pIVar6;
  System_Action_o *pSVar7;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar8;
  System_Collections_Generic_List_InputDevice__o *pSVar9;
  
  if ((DAT_04566ec3 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&Method_InControl_InputManager_AddDeviceManager<UnityInputDeviceManager>__);
    FUN_01bab630(&Method_InControl_InputManager_InputManager_OnActiveDeviceChanged__);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>__ctor__);
    FUN_01bab630(&System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_TypeInfo);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<SetupInternal>b__48_0__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_04566ec3 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (InControl_InputManager_TypeInfo->static_fields->isSetup != false) {
    return;
  }
  pSVar2 = UnityEngine_SystemInfo__get_operatingSystem((MethodInfo *)0x0);
  str2 = UnityEngine_SystemInfo__get_deviceModel((MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,StringLiteral_167/*" "*/,str2,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = System_String__ToUpper(pSVar2,(MethodInfo *)0x0);
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputManager_TypeInfo);
    }
    if (DAT_04566f53 == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_04566f53 = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar3 = &InControl_InputManager_TypeInfo->static_fields->_Platform_k__BackingField;
    *ppSVar3 = pSVar2;
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    pIVar6 = InControl_InputManager_TypeInfo->static_fields;
    pSVar8 = pIVar6->inputDeviceManagers;
    pIVar6->initialTime = 0.0;
    pIVar6->currentTime = 0.0;
    pIVar6->lastUpdateTime = 0.0;
    pIVar6->currentTick = 0;
    if (pSVar8 != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
      iVar1 = (pSVar8->fields)._size;
      (pSVar8->fields)._size = 0;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar1,(MethodInfo *)0x0);
        pIVar6 = InControl_InputManager_TypeInfo->static_fields;
      }
      pSVar9 = pIVar6->devices;
      if (pSVar9 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
        iVar1 = (pSVar9->fields)._size;
        (pSVar9->fields)._size = 0;
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
          pIVar6 = InControl_InputManager_TypeInfo->static_fields;
        }
        pSVar9 = pIVar6->devices;
        __this = (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)
                 thunk_FUN_01bda818(
                                   System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_TypeInfo
                                   );
        System_Collections_ObjectModel_ReadOnlyCollection<object>___ctor
                  ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this,
                   (System_Collections_Generic_IList_T__o *)pSVar9,
                   Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>__ctor__);
        ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->Devices;
        *ppSVar4 = __this;
        thunk_FUN_01c20e04(ppSVar4,__this);
        if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        InControl_InputManager_TypeInfo->static_fields->activeDevice =
             InControl_InputDevice_TypeInfo->static_fields->Null;
        thunk_FUN_01c20e04();
        pSVar7 = InControl_InputManager_TypeInfo->static_fields->OnSetup;
        InControl_InputManager_TypeInfo->static_fields->isSetup = true;
        if (pSVar7 != (System_Action_o *)0x0) {
          (*(code *)(pSVar7->fields).super.super.invoke_impl)
                    ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
          if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar7 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__48_0;
          if (pSVar7 == (System_Action_o *)0x0) {
            if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar7 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            ppSVar5 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__48_0;
            *ppSVar5 = pSVar7;
            thunk_FUN_01c20e04(ppSVar5,pSVar7);
          }
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          ppSVar5 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
          *ppSVar5 = pSVar7;
          thunk_FUN_01c20e04(ppSVar5,pSVar7);
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          InControl_InputManager__AddDeviceManager<object>
                    (Method_InControl_InputManager_AddDeviceManager<UnityInputDeviceManager>__);
          value = (System_Action_InputDevice__o *)
                  thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
          System_Action<object>___ctor();
          method_01 = extraout_x1;
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            method_01 = extraout_x1_00;
          }
          InControl_InputManager__add_OnActiveDeviceChanged(value,method_01);
          InControl_InputManager__UpdateDeviceManagersDualMode(method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void InputManager_OnActiveDeviceChanged(InputDevice device)  [RVA 0x3215974]
// InControl.InputManager$$InputManager_OnActiveDeviceChanged @ RVA 0x3215974

void InControl_InputManager__InputManager_OnActiveDeviceChanged
               (InControl_InputDevice_o *device,MethodInfo *method)

{
  System_String_o *str1;
  System_String_o *pSVar1;
  
  if ((DAT_04566ec4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15492/*"[InputManager] Active device changed: "*/);
    DAT_04566ec4 = 1;
  }
                    /* try { // try from 033159b4 to 034159bb has its CatchHandler @ 03315a10 */
  pSVar1 = StringLiteral_15492/*"[InputManager] Active device changed: "*/;
                    /* try { // try from 033159bc to 03415a03 has its CatchHandler @ 0331591c */
  if (device == (InControl_InputDevice_o *)0x0) {
    str1 = (System_String_o *)0x0;
  }
  else {
    str1 = (System_String_o *)
           (*(device->klass->vtable)._3_ToString.methodPtr)
                     (device,(device->klass->vtable)._3_ToString.method);
  }
  pSVar1 = System_String__Concat(pSVar1,str1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 03315a04 to 03415a07 has its CatchHandler @ 03315a0c */
                    /* try { // try from 03315a08 to 03415a27 has its CatchHandler @ 0331591c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315a04 with catch @ 03315a0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033159b4 with catch @ 03315a10
                        */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public static void Reset()  [RVA 0x3215A18]
// InControl.InputManager$$Reset @ RVA 0x3215A18

void InControl_InputManager__Reset(MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  
                    /* try { // try from 03315a28 to 03415a2b has its CatchHandler @ 03315a4c */
                    /* try { // try from 03315a2c to 03415a53 has its CatchHandler @ 0331591c */
  if ((DAT_04566ec5 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec5 = 1;
  }
                    /* catch() { ... } // from try @ 03315a28 with catch @ 03315a4c */
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315a54 to 03415a5b has its CatchHandler @ 03315a70 */
    method_00 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
                    /* try { // try from 03315a5c to 03415a67 has its CatchHandler @ 0331591c */
  InControl_InputManager__ResetInternal((MethodInfo *)method_00);
  return;
}


// ===== internal static void ResetInternal()  [RVA 0x3215A64]
// InControl.InputManager$$ResetInternal @ RVA 0x3215A64

void InControl_InputManager__ResetInternal(MethodInfo *method)

{
  int32_t iVar1;
  System_Action_o **ppSVar2;
  System_Action_ulong__float__o **ppSVar3;
  System_Action_InputDevice__o **ppSVar4;
  InControl_InputManager_StaticFields *pIVar5;
  System_Collections_Generic_List_InputDevice__o *pSVar6;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar7;
  System_Action_o *pSVar8;
  System_Action_ulong__float__o *pSVar9;
  System_Action_InputDevice__o *pSVar10;
  
                    /* try { // try from 03315a68 to 03415a6f has its CatchHandler @ 03315a70 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315a54 with catch @ 03315a70
                       catch(type#2 @ 00000000) { ... } // from try @ 03315a68 with catch @ 03315a70
                        */
  if ((DAT_04566ec6 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_0__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_1__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_2__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_3__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_4__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<ResetInternal>b__51_5__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    DAT_04566ec6 = 1;
  }
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_0;
  if (pSVar8 == (System_Action_o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar2 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_0;
    *ppSVar2 = pSVar8;
    thunk_FUN_01c20e04(ppSVar2,pSVar8);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar2 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
  *ppSVar2 = pSVar8;
  thunk_FUN_01c20e04(ppSVar2,pSVar8);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_1;
  if (pSVar9 == (System_Action_ulong__float__o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar9 = (System_Action_ulong__float__o *)
             thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo);
    System_Action<ulong,_float>___ctor();
    ppSVar3 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_1;
    *ppSVar3 = pSVar9;
    thunk_FUN_01c20e04(ppSVar3,pSVar9);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar3 = &InControl_InputManager_TypeInfo->static_fields->OnUpdate;
  *ppSVar3 = pSVar9;
  thunk_FUN_01c20e04(ppSVar3,pSVar9);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_2;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
                    /* try { // try from 03315c94 to 03415d9f has its CatchHandler @ 03315c94
                       catch() { ... } // from try @ 03315c94 with catch @ 03315c94
                       catch() { ... } // from try @ 03315e30 with catch @ 03315c94
                       catch() { ... } // from try @ 03315e68 with catch @ 03315c94
                       catch() { ... } // from try @ 03315e90 with catch @ 03315c94
                       catch() { ... } // from try @ 03315ec0 with catch @ 03315c94 */
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_2;
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_3;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_3;
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
                    /* try { // try from 03315da0 to 03415da7 has its CatchHandler @ 03315e6c */
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315db8 to 03415e2f has its CatchHandler @ 03315e74 */
    thunk_FUN_01ba7564();
  }
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_4;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_4;
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315e30 to 03415e5f has its CatchHandler @ 03315c94 */
    thunk_FUN_01ba7564();
  }
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03315e60 to 03415e67 has its CatchHandler @ 03315e70 */
  pSVar10 = InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_5;
  if (pSVar10 == (System_Action_InputDevice__o *)0x0) {
                    /* try { // try from 03315e68 to 03415e8b has its CatchHandler @ 03315c94 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315da0 with catch @ 03315e6c
                        */
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315e60 with catch @ 03315e70
                        */
      thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315db8 with catch @ 03315e74
                        */
    }
                    /* try { // try from 03315e8c to 03415e8f has its CatchHandler @ 03315eb0 */
    pSVar10 = (System_Action_InputDevice__o *)
              thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
                    /* try { // try from 03315e90 to 03415eb7 has its CatchHandler @ 03315c94 */
    System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 03315e8c with catch @ 03315eb0 */
    ppSVar4 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__51_5;
                    /* try { // try from 03315eb8 to 03415ebf has its CatchHandler @ 03315ed4 */
    *ppSVar4 = pSVar10;
    thunk_FUN_01c20e04(ppSVar4,pSVar10);
  }
                    /* try { // try from 03315ec0 to 03415ecb has its CatchHandler @ 03315c94 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03315ecc to 03415ed3 has its CatchHandler @ 03315ed4 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315eb8 with catch @ 03315ed4
                       catch(type#2 @ 00000000) { ... } // from try @ 03315ecc with catch @ 03315ed4
                        */
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  *ppSVar4 = pSVar10;
  thunk_FUN_01c20e04(ppSVar4,pSVar10);
  pIVar5 = InControl_InputManager_TypeInfo->static_fields;
  pSVar7 = pIVar5->inputDeviceManagers;
  if (pSVar7 != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    iVar1 = (pSVar7->fields)._size;
    (pSVar7->fields)._size = 0;
    (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pIVar5 = InControl_InputManager_TypeInfo->static_fields;
    }
    pSVar6 = pIVar5->devices;
    if (pSVar6 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      iVar1 = (pSVar6->fields)._size;
      (pSVar6->fields)._size = 0;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      InControl_InputManager_TypeInfo->static_fields->activeDevice =
           InControl_InputDevice_TypeInfo->static_fields->Null;
      thunk_FUN_01c20e04();
      InControl_InputManager_TypeInfo->static_fields->isSetup = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void AssertIsSetup()  [RVA 0x3215FA0]
// InControl.InputManager$$AssertIsSetup @ RVA 0x3215FA0

void InControl_InputManager__AssertIsSetup(MethodInfo *method)

{
  System_Exception_o *__this;
  System_String_o *message;
  undefined8 uVar1;
  
  if ((DAT_04566ec7 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec7 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (InControl_InputManager_TypeInfo->static_fields->isSetup != false) {
    return;
  }
  thunk_FUN_01bb9178(&System_Exception_TypeInfo);
  __this = (System_Exception_o *)thunk_FUN_01bda818();
  message = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7569/*"InputManager is not initialized. Call InputManager.Setup() first."*/);
  System_Exception___ctor(__this,message,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_InControl_InputManager_AssertIsSetup__);
                    /* try { // try from 03316038 to 034160fb has its CatchHandler @ 03316038
                       catch() { ... } // from try @ 03316038 with catch @ 03316038
                       catch() { ... } // from try @ 03316144 with catch @ 03316038
                       catch() { ... } // from try @ 03316188 with catch @ 03316038
                       catch() { ... } // from try @ 033161c0 with catch @ 03316038
                       catch() { ... } // from try @ 03316200 with catch @ 03316038 */
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this,uVar1);
}


// ===== public static void Update()  [RVA 0x3216044]
// InControl.InputManager$$Update @ RVA 0x3216044

void InControl_InputManager__Update(MethodInfo *method)

{
  InControl_InputManager_c *method_00;
  
  if ((DAT_04566ec8 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec8 = 1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
  InControl_InputManager__UpdateInternal((MethodInfo *)method_00);
  return;
}


// ===== internal static void UpdateInternal()  [RVA 0x3216090]
// InControl.InputManager$$UpdateInternal @ RVA 0x3216090

void InControl_InputManager__UpdateInternal(MethodInfo *method)

{
  InControl_InputManager_c *pIVar1;
  System_Action_o **ppSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_Action_o *pSVar3;
  InControl_InputManager_StaticFields *pIVar4;
  System_Action_ulong__float__o *pSVar5;
  float deltaTime;
  
  if ((DAT_04566ec9 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ec9 = 1;
  }
  pIVar1 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    pIVar1 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)pIVar1);
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->OnSetup;
  if (pSVar3 != (System_Action_o *)0x0) {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 033160fc to 03416103 has its CatchHandler @ 033161a4 */
      pSVar3 = InControl_InputManager_TypeInfo->static_fields->OnSetup;
      if (pSVar3 == (System_Action_o *)0x0) goto LAB_033161c8;
    }
    (*(code *)(pSVar3->fields).super.super.invoke_impl)
              ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
                    /* try { // try from 03316118 to 0341611b has its CatchHandler @ 0331618c */
                    /* try { // try from 0331611c to 03416123 has its CatchHandler @ 033161a0 */
    ppSVar2 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
    *ppSVar2 = (System_Action_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
  }
                    /* try { // try from 03316130 to 03416137 has its CatchHandler @ 03316198 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 03316138 to 03416143 has its CatchHandler @ 0331619c */
  }
  pIVar1 = InControl_InputManager_TypeInfo;
                    /* try { // try from 03316144 to 0341617f has its CatchHandler @ 03316038 */
  InControl_InputManager_TypeInfo->static_fields->currentTick =
       InControl_InputManager_TypeInfo->static_fields->currentTick + 1;
  InControl_InputManager__UpdateCurrentTime((MethodInfo *)pIVar1);
  deltaTime = InControl_InputManager_TypeInfo->static_fields->currentTime -
              InControl_InputManager_TypeInfo->static_fields->lastUpdateTime;
  InControl_InputManager__UpdateDeviceManagers(deltaTime,method_00);
  InControl_InputManager__PreUpdateDevices(deltaTime,method_01);
  InControl_InputManager__UpdateDevices(deltaTime,method_02);
  InControl_InputManager__PostUpdateDevices(deltaTime,method_03);
                    /* try { // try from 03316180 to 03416183 has its CatchHandler @ 03316194 */
                    /* try { // try from 03316184 to 03416187 has its CatchHandler @ 03316190 */
  InControl_InputManager__PostUpdateDeviceManagers(deltaTime,method_04);
                    /* try { // try from 03316188 to 034161bb has its CatchHandler @ 03316038 */
  InControl_InputManager__UpdateActiveDevice(method_05);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316118 with catch @ 0331618c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316184 with catch @ 03316190
                        */
  pIVar4 = InControl_InputManager_TypeInfo->static_fields;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316180 with catch @ 03316194
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316130 with catch @ 03316198
                        */
  pSVar5 = pIVar4->OnUpdate;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03316138 with catch @ 0331619c
                        */
  pIVar4->lastUpdateTime = pIVar4->currentTime;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331611c with catch @ 033161a0
                        */
  if (pSVar5 != (System_Action_ulong__float__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033160fc with catch @ 033161a4
                        */
                    /* try { // try from 033161bc to 034161bf has its CatchHandler @ 033161e8 */
                    /* try { // try from 033161c0 to 034161f7 has its CatchHandler @ 03316038 */
                    /* WARNING: Could not recover jumptable at 0x033161c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar5->fields).super.super.invoke_impl)
              (deltaTime,(pSVar5->fields).super.super.method_code,pIVar4->currentTick,
               (pSVar5->fields).super.super.method);
    return;
  }
LAB_033161c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal static void OnApplicationFocus(bool focusState)  [RVA 0x32169F0]
// InControl.InputManager$$OnApplicationFocus @ RVA 0x32169F0

void InControl_InputManager__OnApplicationFocus(bool focusState,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  InControl_InputControl_o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  char *pcVar4;
  ulong uVar5;
  int index;
  Il2CppClass *pIVar6;
  ulong uVar7;
  
  if ((DAT_04566eca & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566eca = 1;
    method = extraout_x1;
  }
  if (!focusState) {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    }
    pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
    if (pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) {
LAB_03316b34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
        if (((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
            (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 Method_System_Collections_Generic_List<InputDevice>_get_Item__),
            pIVar2 == (Il2CppObject *)0x0)) ||
           (pIVar6 = pIVar2[3].klass, pIVar6 == (Il2CppClass *)0x0)) goto LAB_03316b34;
        pcVar4 = (pIVar6->_1).namespaze;
        if (0 < (int)pcVar4) {
          uVar5 = (ulong)pcVar4 & 0xffffffff;
          if (uVar5 == 0) {
LAB_03316b30:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar7 = 0;
          while( true ) {
            __this = (&(pIVar6->_1).byval_arg.data)[uVar7];
            if (__this != (InControl_InputControl_o *)0x0) {
              InControl_InputControl__SetZeroTick(__this,(MethodInfo *)0x0);
            }
            if (uVar5 - 1 == uVar7) break;
            uVar7 = uVar7 + 1;
            if (*(uint *)&(pIVar6->_1).namespaze <= uVar7) goto LAB_03316b30;
          }
        }
        index = index + 1;
      } while (index != iVar1);
    }
  }
  return;
}


// ===== internal static void OnApplicationPause(bool pauseState)  [RVA 0x3216B38]
// InControl.InputManager$$OnApplicationPause @ RVA 0x3216B38

void InControl_InputManager__OnApplicationPause(bool pauseState,MethodInfo *method)

{
  return;
}


// ===== internal static void OnApplicationQuit()  [RVA 0x3216B3C]
// InControl.InputManager$$OnApplicationQuit @ RVA 0x3216B3C

void InControl_InputManager__OnApplicationQuit(MethodInfo *method)

{
  return;
}


// ===== private static void UpdateActiveDevice()  [RVA 0x3216820]
// InControl.InputManager$$UpdateActiveDevice @ RVA 0x3216820

void InControl_InputManager__UpdateActiveDevice(MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  InControl_InputManager_c *pIVar3;
  MethodInfo *pMVar4;
  MethodInfo *pMVar5;
  MethodInfo *method_00;
  InControl_InputDevice_o *pIVar6;
  MethodInfo *extraout_x0;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_02;
  System_Collections_Generic_List_InputDevice__o *pSVar7;
  System_Action_InputDevice__o *pSVar8;
  uint index;
  
                    /* try { // try from 0331682c to 03416833 has its CatchHandler @ 03316870 */
                    /* try { // try from 03316840 to 03416843 has its CatchHandler @ 033168e8 */
                    /* try { // try from 03316844 to 03416847 has its CatchHandler @ 033168c0 */
  if ((DAT_04566ecb & 1) == 0) {
                    /* try { // try from 03316848 to 0341684f has its CatchHandler @ 033168b8 */
                    /* try { // try from 03316850 to 03416853 has its CatchHandler @ 033168b4 */
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
                    /* try { // try from 03316854 to 03416857 has its CatchHandler @ 033168ac */
                    /* try { // try from 03316858 to 0341685b has its CatchHandler @ 033168a8 */
                    /* try { // try from 0331685c to 0341685f has its CatchHandler @ 033168a0 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03316860 to 03416863 has its CatchHandler @ 0331688c */
                    /* try { // try from 03316864 to 03416867 has its CatchHandler @ 03316884 */
                    /* try { // try from 03316868 to 0341686b has its CatchHandler @ 03316880 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
                    /* try { // try from 0331686c to 0341686f has its CatchHandler @ 03316870 */
                    /* catch() { ... } // from try @ 0331682c with catch @ 03316870
                       catch() { ... } // from try @ 0331686c with catch @ 03316870
                       try { // try from 03316870 to 034168fb has its CatchHandler @ 033162a8 */
                    /* catch() { ... } // from try @ 033167e0 with catch @ 03316874 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
                    /* catch() { ... } // from try @ 03316474 with catch @ 03316878 */
                    /* catch() { ... } // from try @ 0331644c with catch @ 0331687c */
    DAT_04566ecb = 1;
  }
                    /* catch() { ... } // from try @ 03316868 with catch @ 03316880 */
                    /* catch() { ... } // from try @ 03316864 with catch @ 03316884 */
                    /* catch() { ... } // from try @ 033163e4 with catch @ 03316888
                       catch() { ... } // from try @ 033167c0 with catch @ 03316888
                       catch() { ... } // from try @ 033167f8 with catch @ 03316888 */
  pIVar3 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0331680c with catch @ 0331688c
                       catch() { ... } // from try @ 03316860 with catch @ 0331688c */
    pIVar3 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0331640c with catch @ 03316890 */
  pMVar4 = (MethodInfo *)InControl_InputManager__get_ActiveDevice((MethodInfo *)pIVar3);
                    /* catch() { ... } // from try @ 03316604 with catch @ 03316894 */
                    /* catch() { ... } // from try @ 03316620 with catch @ 03316898 */
                    /* catch() { ... } // from try @ 03316608 with catch @ 0331689c */
  pSVar7 = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* catch() { ... } // from try @ 0331685c with catch @ 033168a0 */
  if (pSVar7 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
                    /* catch() { ... } // from try @ 0331654c with catch @ 033168a4 */
    uVar1 = (pSVar7->fields)._size;
                    /* catch() { ... } // from try @ 03316858 with catch @ 033168a8 */
                    /* catch() { ... } // from try @ 03316854 with catch @ 033168ac */
                    /* catch() { ... } // from try @ 03316510 with catch @ 033168b0 */
                    /* catch() { ... } // from try @ 03316850 with catch @ 033168b4 */
                    /* catch() { ... } // from try @ 03316848 with catch @ 033168b8 */
                    /* catch() { ... } // from try @ 03316598 with catch @ 033168bc */
    index = 0;
                    /* catch() { ... } // from try @ 03316844 with catch @ 033168c0 */
    pMVar5 = pMVar4;
    while( true ) {
                    /* catch() { ... } // from try @ 033164d0 with catch @ 033168c4 */
                    /* catch() { ... } // from try @ 03316688 with catch @ 033168c8 */
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03316764 with catch @ 033168cc */
                    /* catch() { ... } // from try @ 0331670c with catch @ 033168d0 */
        pMVar5 = (MethodInfo *)thunk_FUN_01ba7564(InControl_InputManager_TypeInfo);
      }
                    /* catch() { ... } // from try @ 033166b4 with catch @ 033168d4 */
                    /* catch() { ... } // from try @ 0331665c with catch @ 033168d8 */
      if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == index) break;
                    /* catch() { ... } // from try @ 03316738 with catch @ 033168dc */
                    /* catch() { ... } // from try @ 033166e0 with catch @ 033168e0 */
                    /* catch() { ... } // from try @ 03316630 with catch @ 033168e4 */
      pSVar7 = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* catch() { ... } // from try @ 03316840 with catch @ 033168e8 */
      if (pSVar7 == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_033169ec;
      method_00 = (MethodInfo *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar7,index,
                             Method_System_Collections_Generic_List<InputDevice>_get_Item__);
                    /* try { // try from 033168fc to 034168ff has its CatchHandler @ 0331693c */
      pIVar6 = InControl_InputManager__get_ActiveDevice(method_00);
                    /* try { // try from 03316900 to 0341695b has its CatchHandler @ 033162a8 */
      method_01 = extraout_x1;
      if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(InControl_InputDevice_TypeInfo);
        method_01 = extraout_x1_00;
      }
      if (pIVar6 == InControl_InputDevice_TypeInfo->static_fields->Null) {
LAB_03316958:
                    /* try { // try from 0331695c to 03416967 has its CatchHandler @ 03316968 */
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_01 = extraout_x1_02;
        }
                    /* catch() { ... } // from try @ 0331695c with catch @ 03316968 */
        InControl_InputManager__set_ActiveDevice((InControl_InputDevice_o *)method_00,method_01);
        pMVar5 = extraout_x0;
      }
      else {
        pIVar3 = InControl_InputManager_TypeInfo;
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          pIVar3 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 033168fc with catch @ 0331693c */
        pIVar6 = InControl_InputManager__get_ActiveDevice((MethodInfo *)pIVar3);
        if (method_00 == (MethodInfo *)0x0) goto LAB_033169ec;
        bVar2 = InControl_InputDevice__LastChangedAfter
                          ((InControl_InputDevice_o *)method_00,pIVar6,(MethodInfo *)0x0);
        pMVar5 = (MethodInfo *)(ulong)bVar2;
        method_01 = extraout_x1_01;
        if (bVar2) goto LAB_03316958;
      }
      index = index + 1;
    }
    pMVar5 = (MethodInfo *)InControl_InputManager__get_ActiveDevice(pMVar5);
    if (pMVar4 == pMVar5) {
      return;
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
    pIVar6 = InControl_InputManager__get_ActiveDevice((MethodInfo *)InControl_InputManager_TypeInfo)
    ;
    if (pSVar8 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033169d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar8->fields).super.super.invoke_impl)
                ((pSVar8->fields).super.super.method_code,pIVar6,(pSVar8->fields).super.super.method
                );
      return;
    }
  }
LAB_033169ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AddDeviceManager(InputDeviceManager inputDeviceManager)  [RVA 0x3216C7C]
// InControl.InputManager$$AddDeviceManager @ RVA 0x3216C7C

void InControl_InputManager__AddDeviceManager
               (InControl_InputDeviceManager_o *inputDeviceManager,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  InControl_InputManager_c *method_00;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  MethodInfo *extraout_x1;
  InControl_InputDeviceManager_array *pIVar3;
  InControl_InputManager_StaticFields *pIVar4;
  
  if ((DAT_04566ecc & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_Add__);
    DAT_04566ecc = 1;
    method = extraout_x1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)
                thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)method_00);
  lVar2 = Method_System_Collections_Generic_List<InputDeviceManager>_Add__;
  __this = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (__this != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    pIVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pIVar3 != (InControl_InputDeviceManager_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pIVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pIVar3->m_Items[(int)uVar1] = inputDeviceManager;
        thunk_FUN_01c20e04(pIVar3->m_Items + (int)uVar1,inputDeviceManager);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,
                   (Il2CppObject *)inputDeviceManager,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if (inputDeviceManager != (InControl_InputDeviceManager_o *)0x0) {
        pIVar4 = InControl_InputManager_TypeInfo->static_fields;
                    /* WARNING: Could not recover jumptable at 0x03316d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(inputDeviceManager->klass->vtable)._8_Update.methodPtr)
                  (pIVar4->currentTime - pIVar4->lastUpdateTime,inputDeviceManager,
                   pIVar4->currentTick,(inputDeviceManager->klass->vtable)._8_Update.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void UpdateDeviceManagersDualMode()  [RVA 0x3215328]
// InControl.InputManager$$UpdateDeviceManagersDualMode @ RVA 0x3215328

void InControl_InputManager__UpdateDeviceManagersDualMode(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03315348 to 0341534f has its CatchHandler @ 0331540c */
  if ((DAT_04566ecd & 1) == 0) {
                    /* try { // try from 03315350 to 034153f7 has its CatchHandler @ 03315294 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_get_Current__
                );
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    DAT_04566ecd = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (__this != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__
                          );
        pIVar1 = local_50.fields._current;
                    /* try { // try from 033153f8 to 034153fb has its CatchHandler @ 03315408 */
        if (!bVar2) {
                    /* try { // try from 03315450 to 03415457 has its CatchHandler @ 0331546c */
                    /* try { // try from 03315458 to 03415463 has its CatchHandler @ 03315294 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__
                    );
                    /* try { // try from 03315464 to 0341546b has its CatchHandler @ 0331546c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03315450 with catch @ 0331546c
                       catch(type#2 @ 00000000) { ... } // from try @ 03315464 with catch @ 0331546c
                        */
          return;
        }
                    /* try { // try from 033153fc to 034153ff has its CatchHandler @ 03315404 */
                    /* try { // try from 03315400 to 03415423 has its CatchHandler @ 03315294 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033153fc with catch @ 03315404
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033153f8 with catch @ 03315408
                        */
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03315348 with catch @ 0331540c
                        */
          thunk_FUN_01ba7564();
        }
        if (InControl_InputManager_TypeInfo->static_fields->isDualMode != false) break;
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 03315424 with catch @ 03315448 */
        (*pIVar1->klass->vtable[6].methodPtr)(pIVar1,pIVar1->klass->vtable[6].method);
      }
      if (pIVar1 == (Il2CppObject *)0x0) break;
                    /* try { // try from 03315424 to 03415427 has its CatchHandler @ 03315448 */
                    /* try { // try from 03315428 to 0341544f has its CatchHandler @ 03315294 */
      (*pIVar1->klass->vtable[7].methodPtr)(pIVar1,pIVar1->klass->vtable[7].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void UpdateCurrentTime()  [RVA 0x32161CC]
// InControl.InputManager$$UpdateCurrentTime @ RVA 0x32161CC

void InControl_InputManager__UpdateCurrentTime(MethodInfo *method)

{
  float fVar1;
  
                    /* catch() { ... } // from try @ 033161bc with catch @ 033161e8 */
  if ((DAT_04566ece & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 033161f8 to 034161ff has its CatchHandler @ 03316214 */
    DAT_04566ece = 1;
  }
                    /* try { // try from 03316200 to 0341620b has its CatchHandler @ 03316038 */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0331620c to 03416213 has its CatchHandler @ 03316214 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033161f8 with catch @ 03316214
                       catch(type#2 @ 00000000) { ... } // from try @ 0331620c with catch @ 03316214
                        */
  if (InControl_InputManager_TypeInfo->static_fields->initialTime < 1.4013e-45) {
    fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    InControl_InputManager_TypeInfo->static_fields->initialTime = fVar1;
  }
  fVar1 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar1 = fVar1 - InControl_InputManager_TypeInfo->static_fields->initialTime;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  InControl_InputManager_TypeInfo->static_fields->currentTime = fVar1;
  return;
}


// ===== private static void UpdateDeviceManagers(float deltaTime)  [RVA 0x321629C]
// InControl.InputManager$$UpdateDeviceManagers @ RVA 0x321629C

void InControl_InputManager__UpdateDeviceManagers(float deltaTime,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar3;
  int index;
  undefined4 in_register_00005004;
  
                    /* try { // try from 033162a8 to 034163e3 has its CatchHandler @ 033162a8
                       catch() { ... } // from try @ 033162a8 with catch @ 033162a8
                       catch() { ... } // from try @ 03316870 with catch @ 033162a8
                       catch() { ... } // from try @ 03316900 with catch @ 033162a8 */
  if ((DAT_04566ecf & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__);
    DAT_04566ecf = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (pSVar3 != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
      index = 0;
      while( true ) {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
        if ((pSVar3 == (System_Collections_Generic_List_InputDeviceManager__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__
                               ), pIVar2 == (Il2CppObject *)0x0)) goto LAB_03316398;
        (*pIVar2->klass->vtable[8].methodPtr)
                  (CONCAT44(in_register_00005004,deltaTime),pIVar2,
                   InControl_InputManager_TypeInfo->static_fields->currentTick,
                   pIVar2->klass->vtable[8].method);
        if (iVar1 + -1 == index) break;
        index = index + 1;
      }
    }
    return;
  }
LAB_03316398:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void PostUpdateDeviceManagers(float deltaTime)  [RVA 0x321672C]
// InControl.InputManager$$PostUpdateDeviceManagers @ RVA 0x321672C

void InControl_InputManager__PostUpdateDeviceManagers(float deltaTime,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_InputDeviceManager__o *pSVar3;
  int index;
  undefined4 in_register_00005004;
  
                    /* try { // try from 03316738 to 0341675f has its CatchHandler @ 033168dc */
  if ((DAT_04566ed0 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03316764 to 0341678b has its CatchHandler @ 033168cc */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__);
    DAT_04566ed0 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (pSVar3 != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
      index = 0;
      while( true ) {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033167c0 to 034167c3 has its CatchHandler @ 03316888 */
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
                    /* try { // try from 033167e0 to 034167e7 has its CatchHandler @ 03316874 */
        if ((pSVar3 == (System_Collections_Generic_List_InputDeviceManager__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDeviceManager>_get_Item__
                               ), pIVar2 == (Il2CppObject *)0x0)) goto LAB_0331681c;
        (*pIVar2->klass->vtable[9].methodPtr)
                  (CONCAT44(in_register_00005004,deltaTime),pIVar2,pIVar2->klass->vtable[9].method);
                    /* try { // try from 033167f8 to 034167fb has its CatchHandler @ 03316888 */
        if (iVar1 + -1 == index) break;
        index = index + 1;
      }
    }
                    /* try { // try from 0331680c to 03416813 has its CatchHandler @ 0331688c */
    return;
  }
LAB_0331681c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void PreUpdateDevices(float deltaTime)  [RVA 0x321639C]
// InControl.InputManager$$PreUpdateDevices @ RVA 0x321639C

void InControl_InputManager__PreUpdateDevices(float deltaTime,MethodInfo *method)

{
  int iVar1;
  InControl_InputManager_c *pIVar2;
  InControl_InputDevice_o *__this;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  int index;
  
  if ((DAT_04566ed1 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
                    /* try { // try from 033163e4 to 034163e7 has its CatchHandler @ 03316888 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566ed1 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566f54 == '\0') {
                    /* try { // try from 0331640c to 03416433 has its CatchHandler @ 03316890 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566f54 = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = InControl_InputManager_TypeInfo;
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
  InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField = false;
  if (pSVar3 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
                    /* try { // try from 0331644c to 03416453 has its CatchHandler @ 0331687c */
    if (0 < iVar1) {
      index = 0;
      while( true ) {
        if ((pIVar2->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pIVar2 = InControl_InputManager_TypeInfo;
        }
        pSVar3 = pIVar2->static_fields->devices;
                    /* try { // try from 03316474 to 0341647b has its CatchHandler @ 03316878 */
        if ((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
           (__this = (InControl_InputDevice_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDevice>_get_Item__),
           __this == (InControl_InputDevice_o *)0x0)) goto LAB_033164c8;
        InControl_InputDevice__PreUpdate
                  (__this,InControl_InputManager_TypeInfo->static_fields->currentTick,deltaTime,
                   (MethodInfo *)0x0);
        if (iVar1 + -1 == index) break;
        index = index + 1;
        pIVar2 = InControl_InputManager_TypeInfo;
      }
    }
    return;
  }
LAB_033164c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void UpdateDevices(float deltaTime)  [RVA 0x32164CC]
// InControl.InputManager$$UpdateDevices @ RVA 0x32164CC

void InControl_InputManager__UpdateDevices(float deltaTime,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  int index;
  undefined4 in_register_00005004;
  
                    /* try { // try from 033164d0 to 034164d3 has its CatchHandler @ 033168c4 */
  if ((DAT_04566ed2 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
                    /* try { // try from 03316510 to 0341651b has its CatchHandler @ 033168b0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566ed2 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
  if (pSVar3 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
                    /* try { // try from 0331654c to 03416557 has its CatchHandler @ 033168a4 */
      index = 0;
      while( true ) {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
        if ((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
           (pIVar2 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDevice>_get_Item__),
           pIVar2 == (Il2CppObject *)0x0)) goto LAB_033165c8;
                    /* try { // try from 03316598 to 034165ab has its CatchHandler @ 033168bc */
        (*pIVar2->klass->vtable[4].methodPtr)
                  (CONCAT44(in_register_00005004,deltaTime),pIVar2,
                   InControl_InputManager_TypeInfo->static_fields->currentTick,
                   pIVar2->klass->vtable[4].method);
        if (iVar1 + -1 == index) break;
        index = index + 1;
      }
    }
    return;
  }
LAB_033165c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void PostUpdateDevices(float deltaTime)  [RVA 0x32165CC]
// InControl.InputManager$$PostUpdateDevices @ RVA 0x32165CC

void InControl_InputManager__PostUpdateDevices(float deltaTime,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  InControl_InputDevice_o *__this;
  System_Collections_Generic_List_InputDevice__o *pSVar3;
  int index;
  
  if ((DAT_04566ed3 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 03316604 to 03416607 has its CatchHandler @ 03316894 */
                    /* try { // try from 03316608 to 03416613 has its CatchHandler @ 0331689c */
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
                    /* try { // try from 03316620 to 0341662b has its CatchHandler @ 03316898 */
    DAT_04566ed3 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03316630 to 03416657 has its CatchHandler @ 033168e4 */
    thunk_FUN_01ba7564();
  }
  pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
  if (pSVar3 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    if (0 < iVar1) {
      index = 0;
                    /* try { // try from 0331665c to 03416683 has its CatchHandler @ 033168d8 */
      while( true ) {
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* try { // try from 03316688 to 034166af has its CatchHandler @ 033168c8 */
        if ((pSVar3 == (System_Collections_Generic_List_InputDevice__o *)0x0) ||
           (__this = (InControl_InputDevice_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                Method_System_Collections_Generic_List<InputDevice>_get_Item__),
           __this == (InControl_InputDevice_o *)0x0)) goto LAB_03316728;
        InControl_InputDevice__PostUpdate
                  (__this,InControl_InputManager_TypeInfo->static_fields->currentTick,deltaTime,
                   (MethodInfo *)0x0);
                    /* try { // try from 033166b4 to 034166db has its CatchHandler @ 033168d4 */
        bVar2 = InControl_InputDevice__get_MenuWasPressed(__this,(MethodInfo *)0x0);
        if (bVar2) {
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04566f54 == '\0') {
            FUN_01bab630(&InControl_InputManager_TypeInfo);
            DAT_04566f54 = '\x01';
          }
                    /* try { // try from 033166e0 to 03416707 has its CatchHandler @ 033168e0 */
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          InControl_InputManager_TypeInfo->static_fields->_MenuWasPressed_k__BackingField = true;
        }
        if (iVar1 + -1 == index) break;
        index = index + 1;
                    /* try { // try from 0331670c to 03416733 has its CatchHandler @ 033168d0 */
      }
    }
    return;
  }
LAB_03316728:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AttachDevice(InputDevice inputDevice)  [RVA 0x3216D78]
// InControl.InputManager$$AttachDevice @ RVA 0x3216D78

void InControl_InputManager__AttachDevice(InControl_InputDevice_o *inputDevice,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  InControl_InputManager_c *method_00;
  ulong uVar3;
  System_Collections_Generic_List_InputDevice__o *pSVar4;
  System_Comparison_InputDevice__o **ppSVar5;
  MethodInfo *pMVar6;
  InControl_InputDevice_o *pIVar7;
  System_String_o *str1;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  InControl_InputDevice_array *pIVar9;
  System_Action_InputDevice__o *pSVar10;
  System_Comparison_InputDevice__o *comparison;
  
  if ((DAT_04566ed4 & 1) == 0) {
    FUN_01bab630(&System_Comparison<InputDevice>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Sort__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<AttachDevice>b__69_0__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_15493/*"[InputManager]: device attached: ("*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    DAT_04566ed4 = 1;
    method = extraout_x1;
  }
  method_00 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (InControl_InputManager_c *)
                thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)method_00);
  if (inputDevice != (InControl_InputDevice_o *)0x0) {
    uVar3 = (*(inputDevice->klass->vtable)._6_get_IsSupportedOnThisPlatform.methodPtr)
                      (inputDevice,
                       (inputDevice->klass->vtable)._6_get_IsSupportedOnThisPlatform.method);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<InputDevice>_Add__;
    pSVar4 = InControl_InputManager_TypeInfo->static_fields->devices;
    if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      pIVar9 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pIVar9 != (InControl_InputDevice_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pIVar9->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pIVar9->m_Items[(int)uVar1] = inputDevice;
          thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1,inputDevice);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)inputDevice
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = InControl_InputManager_TypeInfo->static_fields->devices;
        if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        comparison = InControl_InputManager_<>c_TypeInfo->static_fields->__9__69_0;
        if (comparison == (System_Comparison_InputDevice__o *)0x0) {
          if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          comparison = (System_Comparison_InputDevice__o *)
                       thunk_FUN_01bda818(System_Comparison<InputDevice>_TypeInfo);
          System_Comparison<object>___ctor();
          ppSVar5 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__69_0;
          *ppSVar5 = comparison;
          thunk_FUN_01c20e04(ppSVar5,comparison);
        }
        if (pSVar4 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
          System_Collections_Generic_List<object>__Sort
                    ((System_Collections_Generic_List_object__o *)pSVar4,
                     (System_Comparison_T__o *)comparison,
                     Method_System_Collections_Generic_List<InputDevice>_Sort__);
          if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar10 = InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
          if (pSVar10 != (System_Action_InputDevice__o *)0x0) {
            pMVar6 = (MethodInfo *)
                     (*(code *)(pSVar10->fields).super.super.invoke_impl)
                               ((pSVar10->fields).super.super.method_code,inputDevice,
                                (pSVar10->fields).super.super.method);
            pIVar7 = InControl_InputManager__get_ActiveDevice(pMVar6);
            pMVar6 = extraout_x1_00;
            if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(InControl_InputDevice_TypeInfo);
              pMVar6 = extraout_x1_01;
            }
            if (pIVar7 == InControl_InputDevice_TypeInfo->static_fields->Null) {
              if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar6 = extraout_x1_02;
              }
              InControl_InputManager__set_ActiveDevice(inputDevice,pMVar6);
            }
            pSVar8 = StringLiteral_15493/*"[InputManager]: device attached: ("*/;
            str1 = (System_String_o *)
                   (*(inputDevice->klass->vtable)._3_ToString.methodPtr)
                             (inputDevice,(inputDevice->klass->vtable)._3_ToString.method);
            pSVar8 = System_String__Concat(pSVar8,str1,StringLiteral_1100/*")"*/,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__Log((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DetachDevice(InputDevice inputDevice)  [RVA 0x3217088]
// InControl.InputManager$$DetachDevice @ RVA 0x3217088

void InControl_InputManager__DetachDevice(InControl_InputDevice_o *inputDevice,MethodInfo *method)

{
  InControl_InputManager_c *pIVar1;
  System_Collections_Generic_List_InputDevice__o *pSVar2;
  System_Comparison_InputDevice__o **ppSVar3;
  InControl_InputDevice_o *pIVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  System_Action_InputDevice__o *pSVar6;
  System_Comparison_InputDevice__o *comparison;
  
  if ((DAT_04566ed5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<InputDevice>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Sort__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<DetachDevice>b__70_0__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    FUN_01bab630(&StringLiteral_15494/*"[InputManager]: device dettached: ("*/);
    DAT_04566ed5 = 1;
    method = extraout_x1;
  }
  pIVar1 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    pIVar1 = (InControl_InputManager_c *)thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__AssertIsSetup((MethodInfo *)pIVar1);
  pSVar2 = InControl_InputManager_TypeInfo->static_fields->devices;
  if (pSVar2 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)inputDevice,
               Method_System_Collections_Generic_List<InputDevice>_Remove__);
    pSVar2 = InControl_InputManager_TypeInfo->static_fields->devices;
    if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = InControl_InputManager_<>c_TypeInfo->static_fields->__9__70_0;
    if (comparison == (System_Comparison_InputDevice__o *)0x0) {
      if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_InputDevice__o *)
                   thunk_FUN_01bda818(System_Comparison<InputDevice>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar3 = &InControl_InputManager_<>c_TypeInfo->static_fields->__9__70_0;
      *ppSVar3 = comparison;
      thunk_FUN_01c20e04(ppSVar3,comparison);
    }
    if (pSVar2 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)pSVar2,
                 (System_Comparison_T__o *)comparison,
                 Method_System_Collections_Generic_List<InputDevice>_Sort__);
      pIVar1 = InControl_InputManager_TypeInfo;
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        pIVar1 = (InControl_InputManager_c *)thunk_FUN_01ba7564();
      }
      pIVar4 = InControl_InputManager__get_ActiveDevice((MethodInfo *)pIVar1);
      if (pIVar4 == inputDevice) {
        method_00 = extraout_x1_00;
        if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          method_00 = extraout_x1_01;
        }
        pIVar4 = InControl_InputDevice_TypeInfo->static_fields->Null;
        if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(InControl_InputManager_TypeInfo);
          method_00 = extraout_x1_02;
        }
        InControl_InputManager__set_ActiveDevice(pIVar4,method_00);
      }
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
      if (pSVar6 != (System_Action_InputDevice__o *)0x0) {
                    /* try { // try from 033172b0 to 034173c3 has its CatchHandler @ 033172b0
                       catch() { ... } // from try @ 033172b0 with catch @ 033172b0
                       catch() { ... } // from try @ 033174e8 with catch @ 033172b0
                       catch() { ... } // from try @ 03317580 with catch @ 033172b0
                       catch() { ... } // from try @ 03317588 with catch @ 033172b0
                       catch() { ... } // from try @ 0331763c with catch @ 033172b0 */
        (*(code *)(pSVar6->fields).super.super.invoke_impl)
                  ((pSVar6->fields).super.super.method_code,inputDevice,
                   (pSVar6->fields).super.super.method);
        pSVar5 = StringLiteral_15494/*"[InputManager]: device dettached: ("*/;
        if (inputDevice == (InControl_InputDevice_o *)0x0) {
          str1 = (System_String_o *)0x0;
        }
        else {
          str1 = (System_String_o *)
                 (*(inputDevice->klass->vtable)._3_ToString.methodPtr)
                           (inputDevice,(inputDevice->klass->vtable)._3_ToString.method);
        }
        pSVar5 = System_String__Concat(pSVar5,str1,StringLiteral_1100/*")"*/,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DevicePartWasDetached(InputDevice device)  [RVA 0x3217324]
// InControl.InputManager$$DevicePartWasDetached @ RVA 0x3217324

void InControl_InputManager__DevicePartWasDetached
               (InControl_InputDevice_o *device,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *pSVar1;
  
  if ((DAT_04566ed6 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566ed6 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pSVar1 = InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  if (pSVar1 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03317390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,device,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void ChangeDeviceStyle(InputDevice device)  [RVA 0x3217398]
// InControl.InputManager$$ChangeDeviceStyle @ RVA 0x3217398

void InControl_InputManager__ChangeDeviceStyle(InControl_InputDevice_o *device,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Action_InputDevice__o *pSVar1;
  
  if ((DAT_04566ed7 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* try { // try from 033173c4 to 034173eb has its CatchHandler @ 033175a8 */
    DAT_04566ed7 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pSVar1 = InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  if (pSVar1 != (System_Action_InputDevice__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03317404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,device,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HideDevicesWithProfile(Type type)  [RVA 0x321740C]
// InControl.InputManager$$HideDevicesWithProfile @ RVA 0x321740C

void InControl_InputManager__HideDevicesWithProfile(System_Type_o *type,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_o *pSVar1;
  ulong uVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03317420 to 0341744b has its CatchHandler @ 033175a4 */
  if ((DAT_04566ed8 & 1) == 0) {
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_var);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    DAT_04566ed8 = 1;
    method = extraout_x1;
  }
  handle = InControl_UnityInputDeviceProfile_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo,method);
  }
                    /* try { // try from 0331747c to 03417487 has its CatchHandler @ 03317598 */
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (type != (System_Type_o *)0x0) {
    uVar2 = (*(type->klass->vtable)._21_IsSubclassOf.methodPtr)
                      (type,pSVar1,(type->klass->vtable)._21_IsSubclassOf.method);
    if ((uVar2 & 1) != 0) {
      if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033174cc to 034174e7 has its CatchHandler @ 03317594 */
      InControl_UnityInputDeviceProfile__Hide(type,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EnsureIsEnoughDevices()  [RVA 0x32174E8]
// InControl.InputManager$$EnsureIsEnoughDevices @ RVA 0x32174E8

void InControl_InputManager__EnsureIsEnoughDevices(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033174e8 to 03417573 has its CatchHandler @ 033172b0 */
  if ((DAT_04566ed9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_get_Current__
                );
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    DAT_04566ed9 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (__this != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
                    /* try { // try from 03317574 to 03417577 has its CatchHandler @ 033175a0 */
                    /* try { // try from 03317578 to 0341757f has its CatchHandler @ 0331759c */
                    /* try { // try from 03317580 to 03417583 has its CatchHandler @ 033172b0 */
                    /* try { // try from 03317584 to 03417587 has its CatchHandler @ 03317590 */
                    /* try { // try from 03317588 to 034175b7 has its CatchHandler @ 033172b0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317584 with catch @ 03317590
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033174cc with catch @ 03317594
                        */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    while( true ) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331747c with catch @ 03317598
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317578 with catch @ 0331759c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317574 with catch @ 033175a0
                        */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__
                        );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317420 with catch @ 033175a4
                        */
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
                    /* catch() { ... } // from try @ 033175b8 with catch @ 033175cc */
                    /* try { // try from 033175d4 to 0341763b has its CatchHandler @ 03317650 */
        return;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033173c4 with catch @ 033175a8
                        */
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
                    /* try { // try from 033175b8 to 034175bb has its CatchHandler @ 033175cc */
      (*(local_38.fields._current)->klass->vtable[4].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[4].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void OnDeviceCountChanged()  [RVA 0x3217660]
// InControl.InputManager$$OnDeviceCountChanged @ RVA 0x3217660

void InControl_InputManager__OnDeviceCountChanged(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566eda & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_get_Current__
                );
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    DAT_04566eda = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  if (__this != (System_Collections_Generic_List_InputDeviceManager__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InputDeviceManager>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_MoveNext__
                        );
                    /* try { // try from 0331771c to 03417723 has its CatchHandler @ 03317880 */
      if (!bVar1) {
                    /* try { // try from 03317738 to 0341773f has its CatchHandler @ 03317878 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<InputDeviceManager>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[5].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[5].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static InputDevice get_DefaultActiveDevice()  [RVA 0x32177D8]
// InControl.InputManager$$get_DefaultActiveDevice @ RVA 0x32177D8

InControl_InputDevice_o * InControl_InputManager__get_DefaultActiveDevice(MethodInfo *method)

{
  InControl_InputDevice_o *pIVar1;
  System_Collections_Generic_List_InputDevice__o *__this;
  
  if ((DAT_04566edb & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    DAT_04566edb = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = InControl_InputManager_TypeInfo->static_fields->devices;
  if (__this != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    if ((__this->fields)._size < 1) {
                    /* try { // try from 03317898 to 0341789b has its CatchHandler @ 033178c4 */
                    /* try { // try from 0331789c to 034178d3 has its CatchHandler @ 03317654 */
      if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      return InControl_InputDevice_TypeInfo->static_fields->Null;
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 03317868 to 0341786b has its CatchHandler @ 0331787c */
                    /* try { // try from 0331786c to 03417897 has its CatchHandler @ 03317654 */
      __this = InControl_InputManager_TypeInfo->static_fields->devices;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317764 with catch @ 03317870
                        */
      if (__this == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_033178c4;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033177a4 with catch @ 03317874
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317738 with catch @ 03317878
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317868 with catch @ 0331787c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0331771c with catch @ 03317880
                        */
    pIVar1 = (InControl_InputDevice_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,
                        Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    return pIVar1;
  }
LAB_033178c4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03317898 with catch @ 033178c4 */
  FUN_01bab8c8();
}


// ===== public static InputDevice get_ActiveDevice()  [RVA 0x3216B40]
// InControl.InputManager$$get_ActiveDevice @ RVA 0x3216B40

InControl_InputDevice_o * InControl_InputManager__get_ActiveDevice(MethodInfo *method)

{
  InControl_InputManager_StaticFields *pIVar1;
  InControl_InputDevice_o **ppIVar2;
  
  if ((DAT_04566edc & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566edc = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = InControl_InputManager_TypeInfo->static_fields;
  if (pIVar1->activeDevice == (InControl_InputDevice_o *)0x0) {
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppIVar2 = &InControl_InputDevice_TypeInfo->static_fields->Null;
  }
  else {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar1 = InControl_InputManager_TypeInfo->static_fields;
    }
    ppIVar2 = &pIVar1->activeDevice;
  }
  return *ppIVar2;
}


// ===== private static void set_ActiveDevice(InputDevice value)  [RVA 0x3216BE8]
// InControl.InputManager$$set_ActiveDevice @ RVA 0x3216BE8

void InControl_InputManager__set_ActiveDevice(InControl_InputDevice_o *value,MethodInfo *method)

{
  InControl_InputDevice_o **ppIVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04566edd & 1) == 0) {
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566edd = 1;
    method = extraout_x1;
  }
  if (value == (InControl_InputDevice_o *)0x0) {
    if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputDevice_TypeInfo,method);
      method = extraout_x1_00;
    }
    value = InControl_InputDevice_TypeInfo->static_fields->Null;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  ppIVar1 = &InControl_InputManager_TypeInfo->static_fields->activeDevice;
  *ppIVar1 = value;
  thunk_FUN_01c20e04(ppIVar1,value);
  return;
}


// ===== public static bool get_EnableXInput()  [RVA 0x32178C8]
// InControl.InputManager$$get_EnableXInput @ RVA 0x32178C8

bool InControl_InputManager__get_EnableXInput(MethodInfo *method)

{
                    /* try { // try from 033178d4 to 034178db has its CatchHandler @ 033178f0 */
                    /* try { // try from 033178dc to 034178e7 has its CatchHandler @ 03317654 */
  if ((DAT_04566ede & 1) == 0) {
                    /* try { // try from 033178e8 to 034178ef has its CatchHandler @ 033178f0 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033178d4 with catch @ 033178f0
                       catch(type#2 @ 00000000) { ... } // from try @ 033178e8 with catch @ 033178f0
                        */
    DAT_04566ede = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return InControl_InputManager_TypeInfo->static_fields->enableXInput;
}


// ===== public static void set_EnableXInput(bool value)  [RVA 0x3217920]
// InControl.InputManager$$set_EnableXInput @ RVA 0x3217920

void InControl_InputManager__set_EnableXInput(bool value,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566edf & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_04566edf = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager_TypeInfo->static_fields->enableXInput = value;
  return;
}


// ===== public static VersionInfo get_UnityVersion()  [RVA 0x3217980]
// InControl.InputManager$$get_UnityVersion @ RVA 0x3217980

InControl_VersionInfo_o InControl_InputManager__get_UnityVersion(MethodInfo *method)

{
  InControl_InputManager_c *pIVar1;
  InControl_InputManager_StaticFields *pIVar2;
  InControl_VersionInfo_o value;
  InControl_VersionInfo_Fields IVar3;
  System_Nullable_VersionInfo__Fields local_38;
  
  if ((DAT_04566ee0 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<VersionInfo>__ctor__);
    FUN_01bab630(&Method_System_Nullable<VersionInfo>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<VersionInfo>_get_Value__);
    DAT_04566ee0 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = InControl_InputManager_TypeInfo;
  if ((InControl_InputManager_TypeInfo->static_fields->unityVersion).fields.hasValue == false) {
    value = InControl_VersionInfo__UnityVersion((MethodInfo *)0x0);
    local_38.hasValue = false;
    local_38._1_3_ = 0;
    local_38.value.fields.Major = 0;
    local_38.value.fields.Minor = 0;
    local_38.value.fields.Patch = 0;
    local_38.value.fields.Build = 0;
    System_Nullable<VersionInfo>___ctor
              ((System_Nullable_VersionInfo__o *)&local_38,value,
               Method_System_Nullable<VersionInfo>__ctor__);
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar1 = InControl_InputManager_TypeInfo;
    pIVar2 = InControl_InputManager_TypeInfo->static_fields;
    (pIVar2->unityVersion).fields.value.fields.Build = local_38.value.fields.Build;
    (pIVar2->unityVersion).fields.value.fields.Minor = local_38.value.fields.Minor;
    (pIVar2->unityVersion).fields.value.fields.Patch = local_38.value.fields.Patch;
    (pIVar2->unityVersion).fields.hasValue = local_38.hasValue;
    *(undefined3 *)&(pIVar2->unityVersion).fields.field_0x1 = local_38._1_3_;
    (pIVar2->unityVersion).fields.value.fields.Major = local_38.value.fields.Major;
  }
  if ((pIVar1->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pIVar1 = InControl_InputManager_TypeInfo;
  }
  IVar3 = (InControl_VersionInfo_Fields)
          System_Nullable<VersionInfo>__get_Value
                    (&pIVar1->static_fields->unityVersion,
                     Method_System_Nullable<VersionInfo>_get_Value__);
  return (InControl_VersionInfo_o)IVar3;
}


// ===== public void .ctor()  [RVA 0x3217A8C]
// InControl.InputManager$$.ctor @ RVA 0x3217A8C

void InControl_InputManager___ctor(InControl_InputManager_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x3217A94]
// InControl.InputManager$$.cctor @ RVA 0x3217A94

void InControl_InputManager___cctor(MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Action_o **ppSVar2;
  System_Action_ulong__float__o *pSVar3;
  System_Action_ulong__float__o **ppSVar4;
  System_Action_InputDevice__o *pSVar5;
  System_Action_InputDevice__o **ppSVar6;
  System_Collections_Generic_List_InputDeviceManager__o *__this;
  System_Collections_Generic_List_InputDeviceManager__o **ppSVar7;
  System_Collections_Generic_List_InputDevice__o *__this_00;
  System_Collections_Generic_List_InputDevice__o **ppSVar8;
  InControl_VersionInfo_Fields IVar9;
  
  if ((DAT_04566ee1 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&InControl_InputDevice_TypeInfo);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDeviceManager>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<InputDeviceManager>_TypeInfo);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_0__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_1__);
                    /* try { // try from 03317b4c to 03417bd7 has its CatchHandler @ 03317b4c
                       catch() { ... } // from try @ 03317b4c with catch @ 03317b4c
                       catch() { ... } // from try @ 03317bf8 with catch @ 03317b4c
                       catch() { ... } // from try @ 03317c1c with catch @ 03317b4c
                       catch() { ... } // from try @ 03317c44 with catch @ 03317b4c
                       catch() { ... } // from try @ 03317c84 with catch @ 03317b4c */
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_2__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_3__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_4__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_5__);
    FUN_01bab630(&Method_InControl_InputManager_<>c_<_cctor>b__88_6__);
    FUN_01bab630(&InControl_InputManager_<>c_TypeInfo);
    DAT_04566ee1 = 1;
  }
                    /* try { // try from 03317bd8 to 03417bdf has its CatchHandler @ 03317c28 */
  IVar9 = (InControl_VersionInfo_Fields)InControl_VersionInfo__InControlVersion((MethodInfo *)0x0);
  (InControl_InputManager_TypeInfo->static_fields->Version).fields = IVar9;
                    /* try { // try from 03317bf4 to 03417bf7 has its CatchHandler @ 03317c24 */
                    /* try { // try from 03317bf8 to 03417c17 has its CatchHandler @ 03317b4c */
  if ((InControl_InputManager_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03317c18 to 03417c1b has its CatchHandler @ 03317c20 */
  pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 03317c1c to 03417c3f has its CatchHandler @ 03317b4c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317c18 with catch @ 03317c20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317bf4 with catch @ 03317c24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03317bd8 with catch @ 03317c28
                        */
  System_Action___ctor();
  ppSVar2 = &InControl_InputManager_TypeInfo->static_fields->OnSetup;
  *ppSVar2 = pSVar1;
                    /* try { // try from 03317c40 to 03417c43 has its CatchHandler @ 03317c6c */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 03317c44 to 03417c7b has its CatchHandler @ 03317b4c */
  pSVar3 = (System_Action_ulong__float__o *)thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo)
  ;
  System_Action<ulong,_float>___ctor();
                    /* catch() { ... } // from try @ 03317c40 with catch @ 03317c6c */
  ppSVar4 = &InControl_InputManager_TypeInfo->static_fields->OnUpdate;
  *ppSVar4 = pSVar3;
                    /* try { // try from 03317c7c to 03417c83 has its CatchHandler @ 03317c98 */
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
                    /* try { // try from 03317c84 to 03417c8f has its CatchHandler @ 03317b4c */
                    /* try { // try from 03317c90 to 03417c97 has its CatchHandler @ 03317c98 */
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03317c7c with catch @ 03317c98
                       catch(type#2 @ 00000000) { ... } // from try @ 03317c90 with catch @ 03317c98
                        */
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceAttached;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceDetached;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnActiveDeviceChanged;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDevicePartWasDetached;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar5 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &InControl_InputManager_TypeInfo->static_fields->OnDeviceStyleChanged;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  __this = (System_Collections_Generic_List_InputDeviceManager__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InputDeviceManager>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<InputDeviceManager>__ctor__);
  ppSVar7 = &InControl_InputManager_TypeInfo->static_fields->inputDeviceManagers;
  *ppSVar7 = __this;
  thunk_FUN_01c20e04(ppSVar7,__this);
  if ((InControl_InputDevice_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager_TypeInfo->static_fields->activeDevice =
       InControl_InputDevice_TypeInfo->static_fields->Null;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_InputDevice__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InputDevice>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InputDevice>__ctor__);
  ppSVar8 = &InControl_InputManager_TypeInfo->static_fields->devices;
  *ppSVar8 = __this_00;
  thunk_FUN_01c20e04(ppSVar8,__this_00);
  InControl_InputManager_TypeInfo->static_fields->isDualMode = false;
  return;
}

