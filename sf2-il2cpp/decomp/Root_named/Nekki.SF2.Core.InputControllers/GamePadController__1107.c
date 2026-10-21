// TypeDefIndex 1107
// Namespace: Nekki.SF2.Core.InputControllers
// public class GamePadController : MonoBehaviour
// Fields:
//   private COOJKPHHMCD MLFHDGPOAMN; // 0x20
//   private COOJKPHHMCD ENCJPJEBMKJ; // 0x28
//   private COOJKPHHMCD CFKGBKBACLK; // 0x30
//   private COOJKPHHMCD MNOACHLDOPH; // 0x38
//   private CKOFPNFDDAB AEKEGMAOOHO; // 0x40
//   private CKOFPNFDDAB AHGJIANNLBP; // 0x48
//   private Action<bool> NJPDHIPEMOG; // 0x50
//   private bool LNEACLECIGO; // 0x58
//   public const float AxisStateThreshold = 0.3;
//   private static GamePadController CNMHHKAMGPI; // 0x0
//   private InControlManager CLPBAPCJJLK; // 0x60
//   private bool OPLHELAAKEF; // 0x68

// ===== public InputDevice get_ActiveDevice()  [RVA 0x30E511C]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_ActiveDevice @ RVA 0x30E511C

InControl_InputDevice_o *
Nekki_SF2_Core_InputControllers_GamePadController__get_ActiveDevice
          (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  InControl_InputDevice_o *pIVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045663d2 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663d2 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  pIVar1 = InControl_InputManager__get_ActiveDevice((MethodInfo *)0x0);
  return pIVar1;
}


// ===== public bool GetKeyUp(int KHDPGFJLOKJ, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x30E516C]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetKeyUp @ RVA 0x30E516C

bool Nekki_SF2_Core_InputControllers_GamePadController__GetKeyUp
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663d3 & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663d3 = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar2 <= KHDPGFJLOKJ)) {
    return false;
  }
                    /* try { // try from 031e51b4 to 032e51bb has its CatchHandler @ 031e53f8 */
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
                    /* try { // try from 031e5200 to 032e5233 has its CatchHandler @ 031e53fc */
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    bVar1 = AAENCHDNFKC__GCILEELAMGM(GIDJIIFPHJK,IKKKILCDMMB,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsDualMode(bool CJNHFNHJHPE)  [RVA 0x30E52A8]
// Nekki.SF2.Core.InputControllers.GamePadController$$set_IsDualMode @ RVA 0x30E52A8

void Nekki_SF2_Core_InputControllers_GamePadController__set_IsDualMode
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  if ((DAT_045663d4 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663d4 = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__set_IsDualMode(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void DMCPDALABHN(InputDevice GIDJIIFPHJK)  [RVA 0x30E5300]
// Nekki.SF2.Core.InputControllers.GamePadController$$DMCPDALABHN @ RVA 0x30E5300

void Nekki_SF2_Core_InputControllers_GamePadController__DMCPDALABHN
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,1,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,2,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,3,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,4,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,5,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,6,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,7,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,8,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,9,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,10,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0xb,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0xc,in_x3);
                    /* try { // try from 031e53d8 to 032e53e3 has its CatchHandler @ 031e53f4 */
                    /* try { // try from 031e53e4 to 032e5413 has its CatchHandler @ 031e4ac0 */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0xd,in_x3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5238 with catch @ 031e53f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e53d8 with catch @ 031e53f4
                        */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0xe,in_x3);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e51b4 with catch @ 031e53f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5200 with catch @ 031e53fc
                        */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0xf,in_x3);
                    /* try { // try from 031e5414 to 032e5417 has its CatchHandler @ 031e5440 */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x10,in_x3);
                    /* try { // try from 031e5418 to 032e544f has its CatchHandler @ 031e4ac0 */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x11,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x12,in_x3);
                    /* catch() { ... } // from try @ 031e5414 with catch @ 031e5440 */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x13,in_x3);
                    /* try { // try from 031e5450 to 032e5457 has its CatchHandler @ 031e546c */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x14,in_x3);
                    /* try { // try from 031e5458 to 032e5463 has its CatchHandler @ 031e4ac0 */
                    /* try { // try from 031e5464 to 032e546b has its CatchHandler @ 031e546c */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x15,in_x3);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e5450 with catch @ 031e546c
                       catch(type#2 @ 00000000) { ... } // from try @ 031e5464 with catch @ 031e546c
                        */
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x16,in_x3);
  Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC(__this,GIDJIIFPHJK,0x17,in_x3);
  return;
}


// ===== public void add_OnKeyDown(CKOFPNFDDAB CJNHFNHJHPE)  [RVA 0x30E550C]
// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnKeyDown @ RVA 0x30E550C

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnKeyDown
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               CKOFPNFDDAB_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  CKOFPNFDDAB_o *pCVar3;
  CKOFPNFDDAB_o **ppCVar4;
  CKOFPNFDDAB_o *a;
  
  if ((DAT_045663d5 & 1) == 0) {
    FUN_01bab630(&CKOFPNFDDAB_TypeInfo);
    DAT_045663d5 = 1;
  }
  ppCVar4 = &(__this->fields).AEKEGMAOOHO;
  a = *ppCVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((CKOFPNFDDAB_c *)pSVar2->klass == CKOFPNFDDAB_TypeInfo))) {
    pCVar3 = (CKOFPNFDDAB_o *)FUN_01c07368(ppCVar4,pSVar2,a);
    bVar1 = a == pCVar3;
    a = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnFightZoneChanged(Action<bool> CJNHFNHJHPE)  [RVA 0x30E55A8]
// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnFightZoneChanged @ RVA 0x30E55A8

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnFightZoneChanged
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o **ppSVar6;
  System_Action_bool__o *source;
  
  if ((DAT_045663d6 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_045663d6 = 1;
  }
  ppSVar6 = &(__this->fields).NJPDHIPEMOG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void set_EnableLogs(bool CJNHFNHJHPE)  [RVA 0x30E5658]
// Nekki.SF2.Core.InputControllers.GamePadController$$set_EnableLogs @ RVA 0x30E5658

void Nekki_SF2_Core_InputControllers_GamePadController__set_EnableLogs
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).OPLHELAAKEF = CJNHFNHJHPE;
  return;
}


// ===== public bool GetKeyDownOnAnyDevice(LGMNENGMMOF IKKKILCDMMB)  [RVA 0x30E5664]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetKeyDownOnAnyDevice @ RVA 0x30E5664

bool Nekki_SF2_Core_InputControllers_GamePadController__GetKeyDownOnAnyDevice
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t IKKKILCDMMB,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *source;
  
  if ((DAT_045663d7 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<InputDevice>__);
    FUN_01bab630(&System_Func<InputDevice,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NKAOFDIFMDE_JLEAOFCEFPF__
                );
                    /* try { // try from 031e56ac to 032e57bb has its CatchHandler @ 031e56ac
                       catch() { ... } // from try @ 031e56ac with catch @ 031e56ac
                       catch() { ... } // from try @ 031e589c with catch @ 031e56ac
                       catch() { ... } // from try @ 031e58d8 with catch @ 031e56ac
                       catch() { ... } // from try @ 031e5908 with catch @ 031e56ac
                       catch() { ... } // from try @ 031e5940 with catch @ 031e56ac */
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_NKAOFDIFMDE_TypeInfo);
    DAT_045663d7 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(
                                Nekki_SF2_Core_InputControllers_GamePadController_NKAOFDIFMDE_TypeInfo
                                );
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = IKKKILCDMMB;
    if (DAT_0456647c == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_0456647c = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source = InControl_InputManager_TypeInfo->static_fields->Devices;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<InputDevice,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                       Method_System_Linq_Enumerable_Any<InputDevice>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GetKey(int KHDPGFJLOKJ, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x30E577C]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetKey @ RVA 0x30E577C

bool Nekki_SF2_Core_InputControllers_GamePadController__GetKey
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663d8 & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663d8 = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar2 <= KHDPGFJLOKJ)) {
    return false;
  }
                    /* try { // try from 031e57bc to 032e57c3 has its CatchHandler @ 031e58e4 */
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
                    /* try { // try from 031e5800 to 032e582b has its CatchHandler @ 031e58e8 */
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    bVar1 = AAENCHDNFKC__AJDGKKOPLIM(GIDJIIFPHJK,IKKKILCDMMB,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HFGFAAAMDBL(ulong JLKIJGFFPGO, float MFOOPLCENAN)  [RVA 0x30E5840]
// Nekki.SF2.Core.InputControllers.GamePadController$$HFGFAAAMDBL @ RVA 0x30E5840

void Nekki_SF2_Core_InputControllers_GamePadController__HFGFAAAMDBL
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,uint64_t JLKIJGFFPGO,
               float MFOOPLCENAN,MethodInfo *method)

{
  int32_t iVar1;
  CKOFPNFDDAB_o *pCVar2;
  long lVar3;
  
  iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                    (__this,(MethodInfo *)JLKIJGFFPGO);
  if (iVar1 == 0) {
    return;
  }
  pCVar2 = (__this->fields).AEKEGMAOOHO;
                    /* try { // try from 031e5860 to 032e588f has its CatchHandler @ 031e58ec */
  if ((pCVar2 == (CKOFPNFDDAB_o *)0x0) ||
     (lVar3 = (*(pCVar2->klass->vtable)._10_GetInvocationList.methodPtr)
                        (pCVar2,(pCVar2->klass->vtable)._10_GetInvocationList.method), lVar3 == 0))
  {
LAB_031e5928:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (*(int *)(lVar3 + 0x18) < 2) {
    pCVar2 = (__this->fields).AHGJIANNLBP;
                    /* try { // try from 031e5890 to 032e589b has its CatchHandler @ 031e58dc */
    if ((pCVar2 == (CKOFPNFDDAB_o *)0x0) ||
       (lVar3 = (*(pCVar2->klass->vtable)._10_GetInvocationList.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._10_GetInvocationList.method), lVar3 == 0)
       ) goto LAB_031e5928;
                    /* try { // try from 031e589c to 032e58d3 has its CatchHandler @ 031e56ac */
    if (*(int *)(lVar3 + 0x18) < 2) goto LAB_031e58e8;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 031e58d4 to 032e58d7 has its CatchHandler @ 031e58e0 */
  }
                    /* try { // try from 031e58d8 to 032e5903 has its CatchHandler @ 031e56ac */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5890 with catch @ 031e58dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e58d4 with catch @ 031e58e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e57bc with catch @ 031e58e4
                        */
  Nekki_SF2_Core_InputControllers_GamePadController__PHBLONJEDFH
            (__this,InControl_InputManager_TypeInfo->static_fields->Devices,method);
LAB_031e58e8:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5800 with catch @ 031e58e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5860 with catch @ 031e58ec
                        */
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
                    /* try { // try from 031e5904 to 032e5907 has its CatchHandler @ 031e5930 */
                    /* try { // try from 031e5908 to 032e5937 has its CatchHandler @ 031e56ac */
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished != 0) {
    return;
  }
  thunk_FUN_01ba7564();
  return;
}


// ===== public void add_OnDevicePartDisconnected(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E59DC]
// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnDevicePartDisconnected @ RVA 0x30E59DC

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnDevicePartDisconnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *a;
  
  if ((DAT_045663d9 & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663d9 = 1;
  }
  ppCVar4 = &(__this->fields).CFKGBKBACLK;
  a = *ppCVar4;
                    /* try { // try from 031e5a38 to 032e5a3f has its CatchHandler @ 031e5bf8 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,a);
    bVar1 = a == pCVar3;
    a = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnDeviceConnected(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E5A78]
// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnDeviceConnected @ RVA 0x30E5A78

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceConnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *source;
  
                    /* try { // try from 031e5a7c to 032e5aa7 has its CatchHandler @ 031e5bfc */
  if ((DAT_045663da & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663da = 1;
  }
                    /* try { // try from 031e5aac to 032e5ab3 has its CatchHandler @ 031e5bf0 */
  ppCVar4 = &(__this->fields).MLFHDGPOAMN;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
                    /* try { // try from 031e5ae8 to 032e5b13 has its CatchHandler @ 031e5bec */
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void Vibrate(InputDevice DMEEIIKHKDH, GCAKLDNBADP OKBIKHHKOEN)  [RVA 0x30E5B14]
// Nekki.SF2.Core.InputControllers.GamePadController$$Vibrate @ RVA 0x30E5B14

void Nekki_SF2_Core_InputControllers_GamePadController__Vibrate
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *DMEEIIKHKDH,GCAKLDNBADP_o OKBIKHHKOEN,MethodInfo *method)

{
  GCAKLDNBADP_o OKBIKHHKOEN_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  GCAKLDNBADP_o __this_00;
  undefined8 local_60;
  MethodInfo *pMStack_58;
  
  method_00 = OKBIKHHKOEN.fields._8_8_;
  local_60 = OKBIKHHKOEN.fields._0_8_;
                    /* try { // try from 031e5b18 to 032e5b1f has its CatchHandler @ 031e5be4 */
  pMStack_58 = method_00;
  if ((DAT_045663db & 1) == 0) {
                    /* try { // try from 031e5b54 to 032e5b7f has its CatchHandler @ 031e5be8 */
    FUN_01bab630(&ENOCEOMBHCH_TypeInfo);
    DAT_045663db = 1;
  }
  fVar1 = MEFNOMDAJBF__JBBGLBPOKOI((MethodInfo *)0x0);
  if (DAT_045602fa == '\0') {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
                    /* try { // try from 031e5b84 to 032e5b8b has its CatchHandler @ 031e5be0 */
    DAT_045602fa = '\x01';
  }
                    /* try { // try from 031e5b8c to 032e5bd3 has its CatchHandler @ 031e5958 */
  fVar3 = ABS(fVar1);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar4 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  fVar2 = fVar3 * 1e-06;
  if (fVar3 * 1e-06 <= fVar4) {
    fVar2 = fVar4;
  }
  if (fVar2 <= ABS(0.0 - fVar1)) {
                    /* try { // try from 031e5bd4 to 032e5bdb has its CatchHandler @ 031e5bf4 */
                    /* try { // try from 031e5bdc to 032e5c17 has its CatchHandler @ 031e5958 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5b84 with catch @ 031e5be0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5b18 with catch @ 031e5be4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5b54 with catch @ 031e5be8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5ae8 with catch @ 031e5bec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5aac with catch @ 031e5bf0
                        */
    fVar1 = MEFNOMDAJBF__JBBGLBPOKOI((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5bd4 with catch @ 031e5bf4
                        */
    __this_00.fields.FJMNKKECPPO = 0.0;
    __this_00.fields.LBKAKBJBNCG = 0;
    __this_00.fields._0_8_ = &local_60;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5a38 with catch @ 031e5bf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e5a7c with catch @ 031e5bfc
                        */
    GCAKLDNBADP___ctor(__this_00,OKBIKHHKOEN.fields.LFJGFLNMBMC,OKBIKHHKOEN.fields.FJMNKKECPPO,
                       fVar1 * OKBIKHHKOEN.fields.GPCGAHADKAC,0,method_00);
    OKBIKHHKOEN_00.fields._8_8_ = pMStack_58;
    OKBIKHHKOEN_00.fields.LFJGFLNMBMC = (float)(undefined4)local_60;
    OKBIKHHKOEN_00.fields.GPCGAHADKAC = (float)local_60._4_4_;
                    /* try { // try from 031e5c18 to 032e5c1b has its CatchHandler @ 031e5c48 */
                    /* try { // try from 031e5c1c to 032e5c4f has its CatchHandler @ 031e5958 */
    if ((ENOCEOMBHCH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ENOCEOMBHCH__EEGCCJKIHKM(__this,DMEEIIKHKDH,OKBIKHHKOEN_00,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 031e5c18 with catch @ 031e5c48 */
                    /* try { // try from 031e5c50 to 032e5c57 has its CatchHandler @ 031e5c6c */
  return;
}


// ===== public float GetAxisValue(int KHDPGFJLOKJ, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x30E5C58]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetAxisValue @ RVA 0x30E5C58

float Nekki_SF2_Core_InputControllers_GamePadController__GetAxisValue
                (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
                int32_t IHCDJFOBOEI,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  float fVar2;
  undefined1 auVar3 [16];
  
                    /* try { // try from 031e5c58 to 032e5c63 has its CatchHandler @ 031e5958 */
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
                    /* try { // try from 031e5c64 to 032e5c6b has its CatchHandler @ 031e5c6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e5c50 with catch @ 031e5c6c
                       catch(type#2 @ 00000000) { ... } // from try @ 031e5c64 with catch @ 031e5c6c
                        */
  if ((DAT_045663dc & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663dc = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar1 <= KHDPGFJLOKJ)) {
    return 0.0;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    fVar2 = AAENCHDNFKC__GGPFDMBNLOD(GIDJIIFPHJK,IHCDJFOBOEI,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Start()  [RVA 0x30E5D1C]
// Nekki.SF2.Core.InputControllers.GamePadController$$Start @ RVA 0x30E5D1C

void Nekki_SF2_Core_InputControllers_GamePadController__Start
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  InControl_InControlManager_o *pIVar1;
  System_Action_InputDevice__o *pSVar2;
  System_Action_ulong__float__o *value;
  InControl_InControlManager_o **ppIVar3;
  
  if ((DAT_045663dd & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<InControlManager>__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_HFGFAAAMDBL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_KCBIIMDDFAO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NDMKMCNKGLB__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NODNHJBCKDK__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NPBHCDHGBEI__);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&InControl_TwoAxisInputControl_TypeInfo);
    DAT_045663dd = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = (InControl_InControlManager_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<InControlManager>__);
    ppIVar3 = &(__this->fields).CLPBAPCJJLK;
    *ppIVar3 = pIVar1;
    thunk_FUN_01c20e04(ppIVar3,pIVar1);
    pIVar1 = *ppIVar3;
    if (pIVar1 != (InControl_InControlManager_o *)0x0) {
      (pIVar1->fields).logDebugInfo = true;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar1,true,(MethodInfo *)0x0);
      InControl_TwoAxisInputControl_TypeInfo->static_fields->StateThreshold = 0.3;
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      InControl_InputManager__add_OnDeviceAttached(pSVar2,(MethodInfo *)0x0);
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      InControl_InputManager__add_OnDeviceDetached(pSVar2,(MethodInfo *)0x0);
      value = (System_Action_ulong__float__o *)
              thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo);
      System_Action<ulong,_float>___ctor();
      InControl_InputManager__add_OnUpdate(value,(MethodInfo *)0x0);
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      InControl_InputManager__add_OnDevicePartWasDetached(pSVar2,(MethodInfo *)0x0);
      pSVar2 = (System_Action_InputDevice__o *)
               thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
      System_Action<object>___ctor();
      InControl_InputManager__add_OnDeviceStyleChanged(pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PKENHNAIGHF(ulong JLKIJGFFPGO, ReadOnlyCollection<InputDevice> FFPIGANNBAC)  [RVA 0x30E59D8]
// Nekki.SF2.Core.InputControllers.GamePadController$$PKENHNAIGHF @ RVA 0x30E59D8

void Nekki_SF2_Core_InputControllers_GamePadController__PKENHNAIGHF
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,uint64_t JLKIJGFFPGO,
               System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *FFPIGANNBAC,
               MethodInfo *method)

{
  return;
}


// ===== private void NDMKMCNKGLB(InputDevice GIDJIIFPHJK)  [RVA 0x30E5F64]
// Nekki.SF2.Core.InputControllers.GamePadController$$NDMKMCNKGLB @ RVA 0x30E5F64

void Nekki_SF2_Core_InputControllers_GamePadController__NDMKMCNKGLB
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  COOJKPHHMCD_o *pCVar1;
  
  pCVar1 = (__this->fields).ENCJPJEBMKJ;
  if (pCVar1 != (COOJKPHHMCD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e5f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,GIDJIIFPHJK,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_EnableLogs()  [RVA 0x30E5F88]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_EnableLogs @ RVA 0x30E5F88

bool Nekki_SF2_Core_InputControllers_GamePadController__get_EnableLogs
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  return (__this->fields).OPLHELAAKEF;
}


// ===== public static void Init()  [RVA 0x30E5F90]
// Nekki.SF2.Core.InputControllers.GamePadController$$Init @ RVA 0x30E5F90

void Nekki_SF2_Core_InputControllers_GamePadController__Init(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar2;
  
  if ((DAT_045663de & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<GamePadController>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15471/*"[GamePadConroller]"*/);
    DAT_045663de = 1;
  }
  pNVar2 = Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15471/*"[GamePadConroller]"*/,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar2 = (Nekki_SF2_Core_InputControllers_GamePadController_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<GamePadController>__);
      Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI =
           pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields,
                         pNVar2);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public bool get_IsDualMode()  [RVA 0x30E60B8]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_IsDualMode @ RVA 0x30E60B8

bool Nekki_SF2_Core_InputControllers_GamePadController__get_IsDualMode
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_045663df & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663df = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_0456647d == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647d = '\x01';
    method = extraout_x1_01;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  return InControl_InputManager_TypeInfo->static_fields->isDualMode;
}


// ===== public void add_OnDeviceConnected(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E6140]
// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnDeviceConnected @ RVA 0x30E6140

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceConnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *a;
  
  if ((DAT_045663e0 & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663e0 = 1;
  }
  ppCVar4 = &(__this->fields).MLFHDGPOAMN;
  a = *ppCVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,a);
    bVar1 = a == pCVar3;
    a = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool GetAxisDown(int KHDPGFJLOKJ, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x30E61DC]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetAxisDown @ RVA 0x30E61DC

bool Nekki_SF2_Core_InputControllers_GamePadController__GetAxisDown
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663e1 & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663e1 = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar2 <= KHDPGFJLOKJ)) {
    return false;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    bVar1 = AAENCHDNFKC__BKGGPNFFCHN(GIDJIIFPHJK,IHCDJFOBOEI,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GetKeyDown(int KHDPGFJLOKJ, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x30E62A0]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetKeyDown @ RVA 0x30E62A0

bool Nekki_SF2_Core_InputControllers_GamePadController__GetKeyDown
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663e2 & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663e2 = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar2 <= KHDPGFJLOKJ)) {
    return false;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    bVar1 = AAENCHDNFKC__OCEACOIOMLI(GIDJIIFPHJK,IKKKILCDMMB,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_DevicesCount()  [RVA 0x30E5230]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_DevicesCount @ RVA 0x30E5230

int32_t Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                  (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031e5238 to 032e5253 has its CatchHandler @ 031e53f0 */
  if ((DAT_045663e3 & 1) == 0) {
                    /* try { // try from 031e5254 to 032e53d7 has its CatchHandler @ 031e4ac0 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__)
    ;
    DAT_045663e3 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    iVar1 = System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Count
                      ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                       Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsFightZone(bool CJNHFNHJHPE)  [RVA 0x30E6364]
// Nekki.SF2.Core.InputControllers.GamePadController$$set_IsFightZone @ RVA 0x30E6364

void Nekki_SF2_Core_InputControllers_GamePadController__set_IsFightZone
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  
  if ((__this->fields).LNEACLECIGO == CJNHFNHJHPE) {
    return;
  }
  pSVar1 = (__this->fields).NJPDHIPEMOG;
  (__this->fields).LNEACLECIGO = CJNHFNHJHPE;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e63a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,CJNHFNHJHPE,
               (pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnKeyDown(CKOFPNFDDAB CJNHFNHJHPE)  [RVA 0x30E63A8]
// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnKeyDown @ RVA 0x30E63A8

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnKeyDown
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               CKOFPNFDDAB_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  CKOFPNFDDAB_o *pCVar3;
  CKOFPNFDDAB_o **ppCVar4;
  CKOFPNFDDAB_o *source;
  
  if ((DAT_045663e4 & 1) == 0) {
    FUN_01bab630(&CKOFPNFDDAB_TypeInfo);
    DAT_045663e4 = 1;
  }
  ppCVar4 = &(__this->fields).AEKEGMAOOHO;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((CKOFPNFDDAB_c *)pSVar2->klass == CKOFPNFDDAB_TypeInfo))) {
    pCVar3 = (CKOFPNFDDAB_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void NODNHJBCKDK(InputDevice GIDJIIFPHJK)  [RVA 0x30E6444]
// Nekki.SF2.Core.InputControllers.GamePadController$$NODNHJBCKDK @ RVA 0x30E6444

void Nekki_SF2_Core_InputControllers_GamePadController__NODNHJBCKDK
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  COOJKPHHMCD_o *pCVar1;
  
  pCVar1 = (__this->fields).MNOACHLDOPH;
  if (pCVar1 != (COOJKPHHMCD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e6460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,GIDJIIFPHJK,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EnsureIsEnoughDevices()  [RVA 0x30E6468]
// Nekki.SF2.Core.InputControllers.GamePadController$$EnsureIsEnoughDevices @ RVA 0x30E6468

void Nekki_SF2_Core_InputControllers_GamePadController__EnsureIsEnoughDevices
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045663e5 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663e5 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__EnsureIsEnoughDevices((MethodInfo *)0x0);
  return;
}


// ===== public void add_OnDeviceStyleChanged(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E64B8]
// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnDeviceStyleChanged @ RVA 0x30E64B8

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceStyleChanged
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *a;
  
  if ((DAT_045663e6 & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663e6 = 1;
  }
  ppCVar4 = &(__this->fields).MNOACHLDOPH;
  a = *ppCVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,a);
    bVar1 = a == pCVar3;
    a = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool GetAxisUp(int KHDPGFJLOKJ, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x30E6554]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetAxisUp @ RVA 0x30E6554

bool Nekki_SF2_Core_InputControllers_GamePadController__GetAxisUp
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663e7 & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663e7 = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar2 <= KHDPGFJLOKJ)) {
    return false;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    bVar1 = AAENCHDNFKC__JAHDGCDLKMD(GIDJIIFPHJK,IHCDJFOBOEI,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool get_IsInited()  [RVA 0x30E6618]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_IsInited @ RVA 0x30E6618

bool Nekki_SF2_Core_InputControllers_GamePadController__get_IsInited(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *x;
  
  if ((DAT_045663e8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045663e8 = 1;
  }
  x = Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void add_OnKeyUp(CKOFPNFDDAB CJNHFNHJHPE)  [RVA 0x30E6690]
// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnKeyUp @ RVA 0x30E6690

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnKeyUp
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               CKOFPNFDDAB_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  CKOFPNFDDAB_o *pCVar3;
  CKOFPNFDDAB_o **ppCVar4;
  CKOFPNFDDAB_o *a;
  
  if ((DAT_045663e9 & 1) == 0) {
    FUN_01bab630(&CKOFPNFDDAB_TypeInfo);
    DAT_045663e9 = 1;
  }
  ppCVar4 = &(__this->fields).AHGJIANNLBP;
  a = *ppCVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((CKOFPNFDDAB_c *)pSVar2->klass == CKOFPNFDDAB_TypeInfo))) {
    pCVar3 = (CKOFPNFDDAB_o *)FUN_01c07368(ppCVar4,pSVar2,a);
    bVar1 = a == pCVar3;
    a = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnDeviceStyleChanged(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E672C]
// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnDeviceStyleChanged @ RVA 0x30E672C

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceStyleChanged
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *source;
  
  if ((DAT_045663ea & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663ea = 1;
  }
  ppCVar4 = &(__this->fields).MNOACHLDOPH;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public string GetDeviceName(int KHDPGFJLOKJ)  [RVA 0x30E67C8]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetDeviceName @ RVA 0x30E67C8

System_String_o *
Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
          (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
          MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  void **ppvVar3;
  undefined1 auVar4 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663eb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__);
    auVar4 = FUN_01bab630(&StringLiteral_1/*""*/);
    method_00 = auVar4._8_8_;
    __this = auVar4._0_8_;
    DAT_045663eb = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar1 <= KHDPGFJLOKJ)) {
    ppvVar3 = (void **)&StringLiteral_1/*""*/;
  }
  else {
                    /* try { // try from 031e6818 to 032e6cf7 has its CatchHandler @ 031e6818
                       catch() { ... } // from try @ 031e6818 with catch @ 031e6818
                       catch() { ... } // from try @ 031e6dfc with catch @ 031e6818
                       catch() { ... } // from try @ 031e6e48 with catch @ 031e6818
                       catch() { ... } // from try @ 031e6f90 with catch @ 031e6818 */
    if (DAT_0456647c == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_0456647c = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
    if ((__this_00 == (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) ||
       (pIVar2 = System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                           ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                            KHDPGFJLOKJ,
                            Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                           ), pIVar2 == (Il2CppObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppvVar3 = &pIVar2[1].monitor;
  }
  return *ppvVar3;
}


// ===== public void OnDeviceCountChanged()  [RVA 0x30E6894]
// Nekki.SF2.Core.InputControllers.GamePadController$$OnDeviceCountChanged @ RVA 0x30E6894

void Nekki_SF2_Core_InputControllers_GamePadController__OnDeviceCountChanged
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045663ec & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663ec = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__OnDeviceCountChanged((MethodInfo *)0x0);
  return;
}


// ===== private void NPBHCDHGBEI(InputDevice GIDJIIFPHJK)  [RVA 0x30E68E4]
// Nekki.SF2.Core.InputControllers.GamePadController$$NPBHCDHGBEI @ RVA 0x30E68E4

void Nekki_SF2_Core_InputControllers_GamePadController__NPBHCDHGBEI
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,MethodInfo *method)

{
  COOJKPHHMCD_o *pCVar1;
  
  pCVar1 = (__this->fields).MLFHDGPOAMN;
  if (pCVar1 != (COOJKPHHMCD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e6900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,GIDJIIFPHJK,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KCBIIMDDFAO(InputDevice DMEEIIKHKDH)  [RVA 0x30E6908]
// Nekki.SF2.Core.InputControllers.GamePadController$$KCBIIMDDFAO @ RVA 0x30E6908

void Nekki_SF2_Core_InputControllers_GamePadController__KCBIIMDDFAO
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *DMEEIIKHKDH,MethodInfo *method)

{
  COOJKPHHMCD_o *pCVar1;
  
  pCVar1 = (__this->fields).CFKGBKBACLK;
  if (pCVar1 != (COOJKPHHMCD_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e6924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar1->fields).super.super.invoke_impl)
              ((pCVar1->fields).super.super.method_code,DMEEIIKHKDH,
               (pCVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Vibrate(int KHDPGFJLOKJ, GCAKLDNBADP OKBIKHHKOEN)  [RVA 0x30E692C]
// Nekki.SF2.Core.InputControllers.GamePadController$$Vibrate @ RVA 0x30E692C

void Nekki_SF2_Core_InputControllers_GamePadController__Vibrate
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               GCAKLDNBADP_o OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_01;
  InControl_InputDevice_o *DMEEIIKHKDH;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  __this_00 = __this;
  if ((DAT_045663ed & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar2._8_8_;
    __this_00 = auVar2._0_8_;
    DAT_045663ed = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                        (__this_00,method_00), iVar1 <= KHDPGFJLOKJ)) {
    return;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_01 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    DMEEIIKHKDH = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_01,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    Nekki_SF2_Core_InputControllers_GamePadController__Vibrate
              (__this,DMEEIIKHKDH,OKBIKHHKOEN,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void remove_OnDevicePartDisconnected(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E6A08]
// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnDevicePartDisconnected @ RVA 0x30E6A08

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDevicePartDisconnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *source;
  
  if ((DAT_045663ee & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663ee = 1;
  }
  ppCVar4 = &(__this->fields).CFKGBKBACLK;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool get_IsFightZone()  [RVA 0x30E6AA4]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_IsFightZone @ RVA 0x30E6AA4

bool Nekki_SF2_Core_InputControllers_GamePadController__get_IsFightZone
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  return (__this->fields).LNEACLECIGO;
}


// ===== public static GamePadController get_Current()  [RVA 0x30E6AAC]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_Current @ RVA 0x30E6AAC

Nekki_SF2_Core_InputControllers_GamePadController_o *
Nekki_SF2_Core_InputControllers_GamePadController__get_Current(MethodInfo *method)

{
  if ((DAT_045663ef & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo)
    ;
    DAT_045663ef = 1;
  }
  Nekki_SF2_Core_InputControllers_GamePadController__Init(method);
  return Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI;
}


// ===== public void remove_OnDeviceDisconnected(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E6AF8]
// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnDeviceDisconnected @ RVA 0x30E6AF8

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceDisconnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *source;
  
  if ((DAT_045663f0 & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663f0 = 1;
  }
  ppCVar4 = &(__this->fields).ENCJPJEBMKJ;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool GetKeyUpOnAnyDevice(LGMNENGMMOF IKKKILCDMMB)  [RVA 0x30E6B94]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetKeyUpOnAnyDevice @ RVA 0x30E6B94

bool Nekki_SF2_Core_InputControllers_GamePadController__GetKeyUpOnAnyDevice
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t IKKKILCDMMB,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *source;
  
  if ((DAT_045663f1 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<InputDevice>__);
    FUN_01bab630(&System_Func<InputDevice,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_PJDOCBPCLLN_GOKDMCNJLJK__
                );
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_PJDOCBPCLLN_TypeInfo);
    DAT_045663f1 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(
                                Nekki_SF2_Core_InputControllers_GamePadController_PJDOCBPCLLN_TypeInfo
                                );
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = IKKKILCDMMB;
    if (DAT_0456647c == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_0456647c = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source = InControl_InputManager_TypeInfo->static_fields->Devices;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<InputDevice,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                       Method_System_Linq_Enumerable_Any<InputDevice>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30E6CAC]
// Nekki.SF2.Core.InputControllers.GamePadController$$.ctor @ RVA 0x30E6CAC

void Nekki_SF2_Core_InputControllers_GamePadController___ctor
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  COOJKPHHMCD_o **ppCVar1;
  CKOFPNFDDAB_o **ppCVar2;
  System_Action_bool__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  COOJKPHHMCD_o *pCVar4;
  CKOFPNFDDAB_o *pCVar5;
  System_Action_bool__o *pSVar6;
  Il2CppObject *pIVar7;
  
  if ((DAT_045663f2 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&CKOFPNFDDAB_TypeInfo);
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
                    /* try { // try from 031e6cf8 to 032e6cff has its CatchHandler @ 031e6e28 */
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_AIKLKHJENOH__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_BAIBAIJBKBN__);
                    /* try { // try from 031e6d0c to 032e6d0f has its CatchHandler @ 031e6e24 */
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_CLMJAEPAAEE__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_GBCCLGLLCEK__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_IICLINNKIAB__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_KMOJDGKLAEL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_MDBHGLGPGNE__);
                    /* try { // try from 031e6d48 to 032e6d73 has its CatchHandler @ 031e6e2c */
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo);
    DAT_045663f2 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pCVar4 = Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->__9__72_0;
                    /* try { // try from 031e6d78 to 032e6d7f has its CatchHandler @ 031e6e20 */
  if (pCVar4 == (COOJKPHHMCD_o *)0x0) {
    if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo,method);
    }
    pIVar7 = (Il2CppObject *)
             Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->__9;
    pCVar4 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
                    /* try { // try from 031e6db4 to 032e6ddf has its CatchHandler @ 031e6e1c */
    COOJKPHHMCD___ctor(pCVar4,pIVar7,
                       Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_CLMJAEPAAEE__,
                       (MethodInfo *)0x0);
    ppCVar1 = &Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
               __9__72_0;
    *ppCVar1 = pCVar4;
    thunk_FUN_01c20e04(ppCVar1,pCVar4);
  }
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    ppCVar1 = &(__this->fields).MLFHDGPOAMN;
    *ppCVar1 = pCVar4;
                    /* try { // try from 031e6de0 to 032e6deb has its CatchHandler @ 031e6e18 */
    thunk_FUN_01c20e04(ppCVar1,pCVar4);
                    /* try { // try from 031e6df0 to 032e6dfb has its CatchHandler @ 031e6e14 */
    if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031e6dfc to 032e6e43 has its CatchHandler @ 031e6818 */
    pCVar4 = Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
             __9__72_1;
    if (pCVar4 == (COOJKPHHMCD_o *)0x0) {
      if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e6df0 with catch @ 031e6e14
                        */
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e6de0 with catch @ 031e6e18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e6db4 with catch @ 031e6e1c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e6d78 with catch @ 031e6e20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e6d0c with catch @ 031e6e24
                        */
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->__9;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e6cf8 with catch @ 031e6e28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031e6d48 with catch @ 031e6e2c
                        */
      pCVar4 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
                    /* try { // try from 031e6e44 to 032e6e47 has its CatchHandler @ 031e6f78 */
                    /* try { // try from 031e6e48 to 032e6f87 has its CatchHandler @ 031e6818 */
      COOJKPHHMCD___ctor(pCVar4,pIVar7,
                         Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_AIKLKHJENOH__,
                         (MethodInfo *)0x0);
      ppCVar1 = &Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
                 __9__72_1;
      *ppCVar1 = pCVar4;
      thunk_FUN_01c20e04(ppCVar1,pCVar4);
    }
    ppCVar1 = &(__this->fields).ENCJPJEBMKJ;
    *ppCVar1 = pCVar4;
    thunk_FUN_01c20e04(ppCVar1,pCVar4);
    if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
             __9__72_2;
    if (pCVar4 == (COOJKPHHMCD_o *)0x0) {
      if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->__9;
      pCVar4 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
      COOJKPHHMCD___ctor(pCVar4,pIVar7,
                         Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_BAIBAIJBKBN__,
                         (MethodInfo *)0x0);
      ppCVar1 = &Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
                 __9__72_2;
      *ppCVar1 = pCVar4;
      thunk_FUN_01c20e04(ppCVar1,pCVar4);
    }
    ppCVar1 = &(__this->fields).CFKGBKBACLK;
    *ppCVar1 = pCVar4;
    thunk_FUN_01c20e04(ppCVar1,pCVar4);
    if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
             __9__72_3;
    if (pCVar4 == (COOJKPHHMCD_o *)0x0) {
      if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->__9;
      pCVar4 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
      COOJKPHHMCD___ctor(pCVar4,pIVar7,
                         Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_GBCCLGLLCEK__,
                         (MethodInfo *)0x0);
      ppCVar1 = &Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
                 __9__72_3;
      *ppCVar1 = pCVar4;
      thunk_FUN_01c20e04(ppCVar1,pCVar4);
    }
    ppCVar1 = &(__this->fields).MNOACHLDOPH;
    *ppCVar1 = pCVar4;
                    /* catch() { ... } // from try @ 031e6e44 with catch @ 031e6f78 */
    thunk_FUN_01c20e04(ppCVar1,pCVar4);
                    /* try { // try from 031e6f88 to 032e6f8f has its CatchHandler @ 031e6fa4 */
    if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 031e6f90 to 032e6f9b has its CatchHandler @ 031e6818 */
    }
    pCVar5 = Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
             __9__72_4;
                    /* try { // try from 031e6f9c to 032e6fa3 has its CatchHandler @ 031e6fa4 */
    if (pCVar5 == (CKOFPNFDDAB_o *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e6f88 with catch @ 031e6fa4
                       catch(type#2 @ 00000000) { ... } // from try @ 031e6f9c with catch @ 031e6fa4
                        */
      if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->__9;
      pCVar5 = (CKOFPNFDDAB_o *)thunk_FUN_01bda818(CKOFPNFDDAB_TypeInfo);
      CKOFPNFDDAB___ctor(pCVar5,pIVar7,
                         Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_IICLINNKIAB__,
                         (MethodInfo *)0x0);
      ppCVar2 = &Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
                 __9__72_4;
      *ppCVar2 = pCVar5;
      thunk_FUN_01c20e04(ppCVar2,pCVar5);
    }
    ppCVar2 = &(__this->fields).AEKEGMAOOHO;
    *ppCVar2 = pCVar5;
    thunk_FUN_01c20e04(ppCVar2,pCVar5);
    if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar5 = Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
             __9__72_5;
    if (pCVar5 == (CKOFPNFDDAB_o *)0x0) {
      if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pIVar7 = (Il2CppObject *)
               Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->__9;
      pCVar5 = (CKOFPNFDDAB_o *)thunk_FUN_01bda818(CKOFPNFDDAB_TypeInfo);
      CKOFPNFDDAB___ctor(pCVar5,pIVar7,
                         Method_Nekki_SF2_Core_InputControllers_GamePadController_<>c_KMOJDGKLAEL__,
                         (MethodInfo *)0x0);
      ppCVar2 = &Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
                 __9__72_5;
      *ppCVar2 = pCVar5;
      thunk_FUN_01c20e04(ppCVar2,pCVar5);
    }
    ppCVar2 = &(__this->fields).AHGJIANNLBP;
    *ppCVar2 = pCVar5;
    thunk_FUN_01c20e04(ppCVar2,pCVar5);
    if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
             __9__72_6;
    if (pSVar6 == (System_Action_bool__o *)0x0) {
      if ((Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      ppSVar3 = &Nekki_SF2_Core_InputControllers_GamePadController_<>c_TypeInfo->static_fields->
                 __9__72_6;
      *ppSVar3 = pSVar6;
      thunk_FUN_01c20e04(ppSVar3,pSVar6);
    }
    ppSVar3 = &(__this->fields).NJPDHIPEMOG;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LNCFKMEHFNC(InputDevice GIDJIIFPHJK, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x30E5490]
// Nekki.SF2.Core.InputControllers.GamePadController$$LNCFKMEHFNC @ RVA 0x30E5490

void Nekki_SF2_Core_InputControllers_GamePadController__LNCFKMEHFNC
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               InControl_InputDevice_o *GIDJIIFPHJK,int32_t IKKKILCDMMB,MethodInfo *method)

{
  bool bVar1;
  CKOFPNFDDAB_o *pCVar2;
  
  bVar1 = AAENCHDNFKC__OCEACOIOMLI(GIDJIIFPHJK,IKKKILCDMMB,(MethodInfo *)0x0);
  if (bVar1) {
    pCVar2 = (__this->fields).AEKEGMAOOHO;
  }
  else {
    bVar1 = AAENCHDNFKC__GCILEELAMGM(GIDJIIFPHJK,IKKKILCDMMB,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pCVar2 = (__this->fields).AHGJIANNLBP;
  }
  if (pCVar2 != (CKOFPNFDDAB_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031e54dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pCVar2->fields).super.super.invoke_impl)
              ((pCVar2->fields).super.super.method_code,GIDJIIFPHJK,IKKKILCDMMB,
               (pCVar2->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void VibrateAllDevices(GCAKLDNBADP OKBIKHHKOEN)  [RVA 0x30E7134]
// Nekki.SF2.Core.InputControllers.GamePadController$$VibrateAllDevices @ RVA 0x30E7134

/* WARNING: Removing unreachable block (ram,0x031e7358) */

void Nekki_SF2_Core_InputControllers_GamePadController__VibrateAllDevices
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               GCAKLDNBADP_o OKBIKHHKOEN,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  InControl_InputDevice_o *DMEEIIKHKDH;
  MethodInfo *in_x4;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_045663f3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                );
    DAT_045663f3 = 1;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 == (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = System_Collections_ObjectModel_ReadOnlyCollection<object>__GetEnumerator
                     ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                      Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_GetEnumerator__
                     );
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_031e7258;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031e7258:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) break;
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_031e72b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<InputDevice>_TypeInfo,0);
LAB_031e72b4:
    DMEEIIKHKDH = (InControl_InputDevice_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    Nekki_SF2_Core_InputControllers_GamePadController__Vibrate(__this,DMEEIIKHKDH,OKBIKHHKOEN,in_x4)
    ;
  } while( true );
  if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar6 = pSVar4->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar3;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_031e732c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_031e732c:
    (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  }
  return;
}


// ===== public void add_OnDeviceDisconnected(COOJKPHHMCD CJNHFNHJHPE)  [RVA 0x30E740C]
// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnDeviceDisconnected @ RVA 0x30E740C

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceDisconnected
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               COOJKPHHMCD_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  COOJKPHHMCD_o *pCVar3;
  COOJKPHHMCD_o **ppCVar4;
  COOJKPHHMCD_o *a;
  
  if ((DAT_045663f4 & 1) == 0) {
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    DAT_045663f4 = 1;
  }
  ppCVar4 = &(__this->fields).ENCJPJEBMKJ;
  a = *ppCVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((COOJKPHHMCD_c *)pSVar2->klass == COOJKPHHMCD_TypeInfo))) {
    pCVar3 = (COOJKPHHMCD_o *)FUN_01c07368(ppCVar4,pSVar2,a);
    bVar1 = a == pCVar3;
    a = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool GetAxis(int KHDPGFJLOKJ, HKHJKMFOPFJ IHCDJFOBOEI)  [RVA 0x30E74A8]
// Nekki.SF2.Core.InputControllers.GamePadController$$GetAxis @ RVA 0x30E74A8

bool Nekki_SF2_Core_InputControllers_GamePadController__GetAxis
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663f5 & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663f5 = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar2 <= KHDPGFJLOKJ)) {
    return false;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    bVar1 = AAENCHDNFKC__LENJKMAHDKP(GIDJIIFPHJK,IHCDJFOBOEI,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x30E756C]
// Nekki.SF2.Core.InputControllers.GamePadController$$OnDestroy @ RVA 0x30E756C

void Nekki_SF2_Core_InputControllers_GamePadController__OnDestroy
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  System_Action_InputDevice__o *pSVar1;
  System_Action_ulong__float__o *value;
  MethodInfo *extraout_x1;
  
  if ((DAT_045663f6 & 1) == 0) {
    FUN_01bab630(&System_Action<InputDevice>_TypeInfo);
    FUN_01bab630(&System_Action<ulong,_float>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_HFGFAAAMDBL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_KCBIIMDDFAO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NDMKMCNKGLB__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NODNHJBCKDK__);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NPBHCDHGBEI__);
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663f6 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Action_InputDevice__o *)
           thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo,method);
  System_Action<object>___ctor();
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__remove_OnDeviceAttached(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  InControl_InputManager__remove_OnDeviceDetached(pSVar1,(MethodInfo *)0x0);
  value = (System_Action_ulong__float__o *)thunk_FUN_01bda818(System_Action<ulong,_float>_TypeInfo);
  System_Action<ulong,_float>___ctor();
  InControl_InputManager__remove_OnUpdate(value,(MethodInfo *)0x0);
  pSVar1 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  InControl_InputManager__remove_OnDevicePartWasDetached(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_InputDevice__o *)thunk_FUN_01bda818(System_Action<InputDevice>_TypeInfo);
  System_Action<object>___ctor();
  InControl_InputManager__remove_OnDeviceStyleChanged(pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public void remove_OnKeyUp(CKOFPNFDDAB CJNHFNHJHPE)  [RVA 0x30E7724]
// Nekki.SF2.Core.InputControllers.GamePadController$$remove_OnKeyUp @ RVA 0x30E7724

void Nekki_SF2_Core_InputControllers_GamePadController__remove_OnKeyUp
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               CKOFPNFDDAB_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  CKOFPNFDDAB_o *pCVar3;
  CKOFPNFDDAB_o **ppCVar4;
  CKOFPNFDDAB_o *source;
  
  if ((DAT_045663f7 & 1) == 0) {
    FUN_01bab630(&CKOFPNFDDAB_TypeInfo);
    DAT_045663f7 = 1;
  }
  ppCVar4 = &(__this->fields).AHGJIANNLBP;
  source = *ppCVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((CKOFPNFDDAB_c *)pSVar2->klass == CKOFPNFDDAB_TypeInfo))) {
    pCVar3 = (CKOFPNFDDAB_o *)FUN_01c07368(ppCVar4,pSVar2,source);
    bVar1 = source == pCVar3;
    source = pCVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void add_OnFightZoneChanged(Action<bool> CJNHFNHJHPE)  [RVA 0x30E77C0]
// Nekki.SF2.Core.InputControllers.GamePadController$$add_OnFightZoneChanged @ RVA 0x30E77C0

void Nekki_SF2_Core_InputControllers_GamePadController__add_OnFightZoneChanged
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               System_Action_bool__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_bool__o *pSVar5;
  System_Action_bool__o **ppSVar6;
  System_Action_bool__o *a;
  
  if ((DAT_045663f8 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    DAT_045663f8 = 1;
  }
  ppSVar6 = &(__this->fields).NJPDHIPEMOG;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<bool>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<bool>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_bool__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void PHBLONJEDFH(ReadOnlyCollection<InputDevice> FFPIGANNBAC)  [RVA 0x30E592C]
// Nekki.SF2.Core.InputControllers.GamePadController$$PHBLONJEDFH @ RVA 0x30E592C

void Nekki_SF2_Core_InputControllers_GamePadController__PHBLONJEDFH
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,
               System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *FFPIGANNBAC,
               MethodInfo *method)

{
  int32_t iVar1;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  int index;
  
                    /* catch() { ... } // from try @ 031e5904 with catch @ 031e5930 */
                    /* try { // try from 031e5938 to 032e593f has its CatchHandler @ 031e5954 */
                    /* try { // try from 031e5940 to 032e594b has its CatchHandler @ 031e56ac */
  if ((DAT_045663f9 & 1) == 0) {
                    /* try { // try from 031e594c to 032e5953 has its CatchHandler @ 031e5954 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e5938 with catch @ 031e5954
                       catch(type#2 @ 00000000) { ... } // from try @ 031e594c with catch @ 031e5954
                        */
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__)
    ;
                    /* try { // try from 031e5958 to 032e5a37 has its CatchHandler @ 031e5958
                       catch() { ... } // from try @ 031e5958 with catch @ 031e5958
                       catch() { ... } // from try @ 031e5b8c with catch @ 031e5958
                       catch() { ... } // from try @ 031e5bdc with catch @ 031e5958
                       catch() { ... } // from try @ 031e5c1c with catch @ 031e5958
                       catch() { ... } // from try @ 031e5c58 with catch @ 031e5958 */
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__);
    DAT_045663f9 = 1;
  }
  if (FFPIGANNBAC != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    iVar1 = System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Count
                      ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)FFPIGANNBAC,
                       Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__
                      );
    if (0 < iVar1) {
      index = 0;
      do {
        method_00 = Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
        ;
        GIDJIIFPHJK = (InControl_InputDevice_o *)
                      System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                                ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)
                                 FFPIGANNBAC,index,
                                 (MethodInfo_2907630 *)
                                 Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                                );
        Nekki_SF2_Core_InputControllers_GamePadController__DMCPDALABHN(__this,GIDJIIFPHJK,method_00)
        ;
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ReadOnlyCollection<InputDevice> get_Devices()  [RVA 0x30E7870]
// Nekki.SF2.Core.InputControllers.GamePadController$$get_Devices @ RVA 0x30E7870

System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *
Nekki_SF2_Core_InputControllers_GamePadController__get_Devices
          (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045663fa & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045663fa = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  return InControl_InputManager_TypeInfo->static_fields->Devices;
}

